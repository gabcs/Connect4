#include "button_start.hpp"

#include "graphics.hpp"
#include "button.hpp"
#include "widgets.hpp"
#include <string>
#include "application.hpp"
#include "tabla.hpp"

using namespace genv;
using namespace std;

Button_Start::Button_Start(int _x, int _y, int _size_x, int _size_y)
        :Button( _x, _y, _size_x, _size_y, "START")
{
        _app = NULL;
        _t = NULL;
        new_game = false;
}

void Button_Start::handle(event ev)
{
    if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left )
    {
        checked = true;
        action();
        new_game = true;
    }
    else checked = false;
}

void Button_Start::action()
{
    if(new_game == false)
    {
        Tabla* t = new Tabla(110,30,60,60);
        _app->addWidget(t);
        _t = t;
    }
    if(new_game == true)
    {
        _t->uj_jatek();
    }

}

void Button_Start::set_application(Application* __app)
{
    _app = __app;
}
