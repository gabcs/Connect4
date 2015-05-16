#include "writetextbox.hpp"
#include "graphics.hpp"
#include <string>

using namespace genv;
using namespace std;

WriteTextBox::WriteTextBox( int _x, int _y, int _size_x, int _size_y, string _w_text )
    : Widget( _x, _y, _size_x, _size_y, 0, 0, 0 )
{
    w_text = _w_text;
    checked = false;
    b_r = 255;
    b_g = 255;
    b_b = 255;
}

void WriteTextBox::draw()
{
    gout << move_to(x-2,y) << color(b_r,b_g,b_b) << box(size_x+2,size_y);
    gout << move_to(x, y + (size_y - gout.cascent() - gout.cdescent())/2 + gout.cascent());
    gout << color(r,g,b) << text(w_text);
}

void WriteTextBox::handle(event ev)
{

    if( ev.type == ev_key && (checked == true) )
    {
         if(w_text.length() != 0 && ev.keycode == key_backspace)
        {
            w_text.erase(w_text.end()-1);
        }
        else
        {
            if(gout.twidth(w_text) + gout.twidth(" ") < size_x /*&& ev.keycode >=48 && ev.keycode <= 57*/)
            {
                w_text += ev.keycode;
            }
        }
    }
    if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left ) checked = true;
}

bool WriteTextBox::is_checked() const
{
    return checked;
}

void WriteTextBox::set_checked(bool _checked)
{
    checked = _checked;
}

string WriteTextBox::get_text()
{
    return w_text;
}

void WriteTextBox::set_text(string _selected)
{
    w_text = _selected;
}
