#include "application.hpp"
#include "graphics.hpp"
#include <fstream>
#include <iostream>

using namespace genv;

Application::Application( int _SX, int _SY, std::string _name ) : SX(_SX), SY(_SY), name(_name) {
    isExiting = false;
    focused = -1;               /// a program indulásakor semmi nincs fókuszban
    _width = 0;
    _height = 0;
}

void Application::addWidget( Widget *w ) {
    widgets.push_back( w );
}

void Application::run() {
    gout.open( SX, SY );
    gout.set_title( name );

    event ev;
    while( gin>>ev && !isExiting ) {     /// amíg fogadhat eseményeket és nincs kilépési módban

        if( ev.keycode == key_escape )   /// esc hatására kilépünk
            isExiting = true;

        /// Fókusz kezelése
        if( ev.keycode == key_tab && widgets.size() > 0 )   /// Tab hatására változik a fókusz
            focused = ( focused + 1 ) % widgets.size();     // körbe jár a már létező widgeteken

        if( ev.type == ev_mouse && ev.button==btn_left  ) { /// Bal egér klikk a kiválasztás  (csak bal klikk-kor figyelnek az elemek)
            focused = -1;                                   /// Ha semleges helyre történt a klikkelés (nincs ott semmi), akkor megszüntetjük a fókuszt
            for( size_t i=0; i<widgets.size(); i++ ) {      /// Minden widget-re megvizsgáljuk, hogy ő van-e választva vagy sem
                if( widgets[i]->is_selected(ev.pos_x, ev.pos_y) ) {
                        focused = i;
                }
            }
        }

        for( size_t i=0; i<widgets.size(); ++i )            /// közöljük a widgetekkel, hogy melyikük van fókuszban
            widgets[i]->set_focus( focused == (int)i );

        /// Eseménykezelés
        if( focused != -1)                                /// csak a fókuszban lévő widget kapja meg az eseményeket
            widgets[focused]->handle( ev );

        ///for( size_t i=0; i<widgets.size(); ++i )            // a vektorban található összes vezérlõ megkapja az eseményeket
        ///    widgets[i]->handle( ev );                       // eseménykezelés widget szinten

        /// Vizualizálás
        gout << move_to(0, 0) << color(0,0,0) << box(SX, SY);/// képernyő törlése

        rajzol();

        for( size_t i=0; i<widgets.size(); ++i )
            widgets[i]->draw();                             /// képernyő újra rajzolása
        gout << refresh;                                    /// képernyő frissítése

    }
}

void Application::shutdown() {
    isExiting = true;                                       /// kilépés inicializálása
}

void Application::rajzol() {                                /// kezdőkép kirajzolása
    if( _width == 0 )
    {
        ifstream bef( "connect-four.kep" );
        if( bef.fail() ){ cerr << "hiba! nem talalhato a fajl.";}
        else
        {
            bef >> _width >> _height;
            kep.open(_width, _height);
            for(int i=0; i <_height; ++i) { for(int j=0; j < _width; ++j){ bef >> cr >> cg >> cb; kep << move_to(j,i) << color(cr, cg, cb) << dot; } }
        }
        bef.close();
    }
        gout << stamp(kep, 42, 190);
        gout << move_to(315,285) << color(255,255,0) << text("Made by: Gabor Csaba Attila");
}
