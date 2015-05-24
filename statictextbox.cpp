#include "statictextbox.hpp"
#include "graphics.hpp"
#include <string>

using namespace genv;
using namespace std;

StaticTextBox::StaticTextBox( int _x, int _y, int _size_x, int _size_y, string _s_text )
    : Widget( _x, _y, _size_x, _size_y, 255, 255, 255 )
{
    s_text = _s_text;
    checked = false;
    b_r = 0;
    b_g = 0;
    b_b = 0;
}

void StaticTextBox::draw()
{
    gout << move_to(x,y);
    gout << color(b_r, b_g, b_b);
    gout << box(size_x,size_y);
    gout << move_to(x + size_x/2 - gout.twidth(s_text)/2, y + (size_y - gout.cascent() - gout.cdescent())/2 + gout.cascent());
    gout << color(r,g,b) << text(s_text);
}

void StaticTextBox::handle(event ev)
{
    if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left ) checked = !checked;
}

bool StaticTextBox::is_checked() const
{
    return checked;
}

string StaticTextBox::get_text()
{
    return s_text;
}

void StaticTextBox::set_text(string _selected)
{
    s_text = _selected;
}

void StaticTextBox::set_checked(bool new_check){
    checked = new_check;
}

string StaticTextBox::get_data()
{
    string data = s_text;
    return data;
}

void StaticTextBox::set_color(int _r, int _g, int _b)
{
    b_r = _r;
    b_g = _g;
    b_b = _b;
}
