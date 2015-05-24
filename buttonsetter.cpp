#include "buttonsetter.hpp"
#include "button.hpp"
#include "graphics.hpp"
#include "widgets.hpp"
#include "tabla.hpp"
#include <string>

using namespace std;
using namespace genv;

Button_Setter::Button_Setter()
           :Button( 0, 0, 0, 0, "" )
{
    lepesszam = 0;
    szin = 'b';
}

void Button_Setter::draw()
{
    /*if( checked == true )
    {
        gout << color(r,g,b) << move_to(x+2,y+2) << line_to(x+size_x/2,y+size_y-2) << move_to(x+size_x-2,y+2) << line_to(x+size_x/2,y+size_y-2);
    }*/
}

void Button_Setter::handle(event ev)
{
    /*if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) )
    {
        checked = true;
        if(ev.button == btn_left )
        {
            action();
        }
    }
    else checked = false;*/
}

void Button_Setter::action()
{
    lepesszam = lepesszam+1;
    if( lepesszam%2 == 0 ){ szin = 'b'; }
    if( lepesszam%2 != 0 ){ szin = 'c'; }
}
