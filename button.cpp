#include "button.hpp"
#include "graphics.hpp"
#include <string>
#include <sstream>

using namespace genv;
using namespace std;

Button::Button( int _x, int _y, int _size_x, int _size_y, string _text)
    : Widget( _x, _y, _size_x, _size_y, 125, 125, 125 )
{
    checked = false;
    c_r = 75;
    c_g = 75;
    c_b = 75;
    b_text = _text;
}

void Button::draw()
{
    gout << move_to(x,y);
    gout << color(r,g,b);
    if(checked == true){ gout << color(c_r,c_g,c_b); }
    gout << box(size_x,size_y);
    gout << move_to(x + size_x/2 - gout.twidth(b_text)/2, y + (size_y - gout.cascent() - gout.cdescent())/2 + gout.cascent());
    gout << color(0,0,0) << text(b_text);
}

void Button::handle(event ev)
{
    if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left )
    {
        checked = true;
        action();
    }
    else checked = false;
}

bool Button::is_checked() const
{
    return checked;
}

void Button::set_checked(bool new_check)
{
    checked = new_check;
}

void Button::set_num(int _num)
{
    y = _num;
}

string Button::get_data()
{
    stringstream ss; ss << checked;
    string data = ss.str();
    return data;
}

void Button::set_text(string _selected)
{
    b_text = _selected;
}
