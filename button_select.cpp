#include "button_select.hpp"
#include "button.hpp"
#include "graphics.hpp"
#include "widgets.hpp"
#include "tabla.hpp"
#include <string>

using namespace std;
using namespace genv;

Button_Select::Button_Select( int x, int y, int size_x, int size_y)
           :Button( x, y, size_x, size_y, "" )
{
    a = NULL;
    szin = 'a';
}

void Button_Select::draw()
{
    gout << color(r,g,b) << move_to(x+2,y+2) << line_to(x+size_x/2,y+size_y-2) << move_to(x+size_x-2,y+2) << line_to(x+size_x/2,y+size_y-2);

    if( checked == true )
    {
        gout << color(c_r,c_g,c_b) << move_to(x+2,y+2) << line_to(x+size_x/2,y+size_y-2) << move_to(x+size_x-2,y+2) << line_to(x+size_x/2,y+size_y-2);
    }
}

void Button_Select::handle(event ev)
{
    if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button == btn_left )
    {
        checked = true;
    }
    else checked = false;
}

void Button_Select::action()
{
    jatek_mester.lepes(amoba_oszlop,szin);
}

void Button_Select::set_vector(vector<Widget*> &amobak)
{
    amoba_oszlop = amobak;
}

void Button_Select::set_data(char _szin)
{
    szin = _szin;
}
