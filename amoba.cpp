#include "amoba.hpp"
#include "graphics.hpp"
#include "widgets.hpp"

using namespace genv;
using namespace std;

Amoba::Amoba(int _x, int _y, int _size_x, int _size_y)
      :Widget(_x, _y, _size_x, _size_y, 125, 125, 125)
{
    pont = 'a';
}

void Amoba::draw()
{
    gout << move_to(x, y) << color(r,g,b) << box(size_x, size_y);
    gout << move_to(x+4,y+4);
    if( pont == 'a' ) { gout << color(0,0,0);     }
    if( pont == 'b' ) { gout << color(255,0,0);   }
    if( pont == 'c' ) { gout << color(255,255,0); }
    gout << box(size_x-8,size_y-8);
}

void Amoba::handle(event ev)
{
    ///if( ev.type == ev_mouse && is_selected(ev.pos_x, ev.pos_y) && ev.button==btn_left ){ action(); }
}

void Amoba::action()
{

}

void Amoba::set_pont(char new_pont)
{
    pont = new_pont;
}

char Amoba::get_pont()
{
    return pont;
}
