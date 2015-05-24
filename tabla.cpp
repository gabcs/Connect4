#include "tabla.hpp"

#include "graphics.hpp"
#include "widgets.hpp"
#include "amoba.hpp"
#include "button_select.hpp"
#include "statictextbox.hpp"

#include <vector>

using namespace genv;
using namespace std;

Tabla::Tabla(int _x, int _y, int _size_x, int _size_y)
      :Widget(_x, _y, 7*_size_x, 6*_size_y, 125, 125, 125)
{
        amoba_size_x = _size_x;
        amoba_size_y = _size_y;
        for(unsigned int i = 0; i <= 6; i++)
        {
           vector<Widget*> t;

           Button_Select* bs = new Button_Select(x+i*amoba_size_x,y+amoba_size_x/2,amoba_size_x,amoba_size_y/2);
           b.push_back(bs);
           for(unsigned int j=0; j<=5; j++)
           {
               Amoba* a = new Amoba( x+i*amoba_size_x, y+(j+1)*amoba_size_y, amoba_size_x, amoba_size_y );
               t.push_back(a);
               bs->set_a(a);
           }
           w.push_back(t);
        }
        st1 = new StaticTextBox(85,5,238,30,"Sárga játékos köre.");
        st1->set_color(255,255,0);
        st2 = new StaticTextBox(323,5,232,30,"");
        st2->set_color(0,0,0);
    for(unsigned int i = 0; i <= 6; i++){ b[i]->set_vector(w[i]); }
    szin = 'a';
    lepesszam = 0;
    nyer_szoveg = "";
}

void Tabla::draw()
{
    for(unsigned int i = 0; i <= 6; i++)
    {
        b[i]->draw();
        for(unsigned int j  = 0; j <= 5; j++)
        {
            w[i][j]->draw();
        }
    }
    st1->draw();
    st2->draw();
}

void Tabla::handle(event ev)
{
    if( lepesszam%2 == 0 ){ st1->set_text("Sárga játékos köre."); st1->set_color(255,255,0); }
    if( lepesszam%2 == 1 ){ st1->set_text("Piros játékos köre."); st1->set_color(255,0,0);   }
    for(unsigned int i = 0; i <= 6; i++)
    {
        if(jatek_mester.nyert(w) == false && betelt() == false)
        {
        b[i]->handle(ev);
        if(b[i]->is_checked() == true)
            {
                lepesszam = lepesszam + 1;
                if( lepesszam%2 == 0 ){ szin = 'b'; }
                if( lepesszam%2 == 1 ){ szin = 'c'; }
                b[i]->set_data(szin);
                b[i]->action();
            }
        }
    }
    if( jatek_mester.nyert(w) == true && betelt() == false)
    {
        if(jatek_mester.get_nyertes() == 'c'){ nyer_szoveg = "A sárga játékos nyert!"; st1->set_color(255,255,0); st2->set_color(255,255,0); }
        if(jatek_mester.get_nyertes() == 'b'){ nyer_szoveg = "A piros játékos nyert!"; st1->set_color(255,0,0); st2->set_color(255,0,0);     }
        st1->set_text(nyer_szoveg);
        st2->set_text("VÉGE");
    }
    if(betelt() == true && jatek_mester.nyert(w) == false)
    {
        nyer_szoveg = "A pálya betelt. Döntetlen.";
        st1->set_text(nyer_szoveg); st1->set_color(0,0,0);
        st2->set_text("VÉGE");      st2->set_color(0,0,0);
    }
}

void Tabla::action()
{

}

void Tabla::uj_jatek()
{
    for(unsigned int i = 0; i < 6 ; i++)
    {
        for(unsigned int j = 0; j < 5; j++)
        {
            w[i][j]->set_pont('a');
        }
    }
    jatek_mester.uj_jatek();
}

bool Tabla::betelt()
{
    bool betelte = true;
    for(unsigned int i = 0; i < 6 ; i++)
    {
        for(unsigned int j = 0; j < 5; j++)
        {
            if(w[i][j]->get_pont() == 'a'){ betelte = false; }
        }
    }
    return betelte;
}
