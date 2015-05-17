#include "button_select.hpp"
#include "button.hpp"
#include "graphics.hpp"
#include "widgets.hpp"
#include "tabla.hpp"
#include <string>

using namespace std;
using namespace genv;

Button_Select::Button_Select( int x, int y, int size_x, int size_y)
           :Button( x, y, size_x, size_y, "." )
{

}

void Button_Select::draw()
{
    if( checked == true )
    {
        gout << color(r,g,b) << move_to(x+2,y+2) << line_to(x+size_x/2,y+size_y-2) << move_to(x+size_x-2,y+2) << line_to(x+size_x/2,y+size_y-2);
    }
}

void Button_Select::handle(event ev)
{
    if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) )
    {
        checked = true;
        if(ev.button == btn_left )
        {
            action();
        }
    }
    else checked = false;
}

void Button_Select::action()
{

}
