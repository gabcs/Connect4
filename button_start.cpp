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
}

void Button_Start::handle(event ev)
{
    if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left )
    {
        checked = true;
        action();
    }
    else checked = false;
}

void Button_Start::action()
{
    Tabla* t = new Tabla(20,30,50,50);
    _app->addWidget(t);
}

void Button_Start::set_application(Application* __app)
{
    _app = __app;
}
