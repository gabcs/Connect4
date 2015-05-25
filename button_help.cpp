#include "button_help.hpp"

#include "graphics.hpp"
#include "button.hpp"
#include "widgets.hpp"

using namespace genv;
using namespace std;

Button_Help::Button_Help(int _x, int _y, int _size_x, int _size_y)
        :Button( _x, _y, _size_x, _size_y, "HELP")
{

}

void Button_Help::handle(event ev)
{
    if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) )
    {
        checked = true;
        action();
    }
    else checked = false;
}

void Button_Help::action()
{

}

void Button_Help::draw()
{
    gout << move_to(x,y);
    gout << color(r,g,b);
    if(checked == true){ gout << color(c_r,c_g,c_b); }
    gout << box(size_x,size_y);
    gout << move_to(x + size_x/2 - gout.twidth(b_text)/2, y + (size_y - gout.cascent() - gout.cdescent())/2 + gout.cascent());
    gout << color(0,0,0) << text(b_text);
    if(checked == true)
    {
        gout << move_to(5,35) << color(125,125,125) << box(630,50);
        gout << color(0,0,0);
        gout << move_to(6,35+gout.cdescent()+gout.cascent());
        gout << text("Új játék indításához nyomd meg a 'START' gombot.");
        gout << move_to(6,35+2*(gout.cdescent()+gout.cascent()));
        gout << text("Játék közben amõbádat az oszlopok feletti nyilak kiválasztásával teheted le.");
    }
}
