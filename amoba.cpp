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

        for( int i=1; i<2*(size_x/2-2); ++i ){
            for( int j=1; j<2*r; ++j ){
                if( (x+size_x/2)-(size_x/2-2)+i<640 && (x+size_x/2)-(size_x/2-2)+i>=0 && (y+size_y/2)-(size_x/2-2)+j<480 && (y+size_y/2)-(size_x/2-2)+j>=0 ){
                    gout << move_to((x+size_x/2)-(size_x/2-2)+i,(y+size_y/2)-(size_x/2-2)+j);
                    if ( (((size_x/2-2)-j)*((size_x/2-2)-j)+((size_x/2-2)-i)*((size_x/2-2)-i)) <= (size_x/2-2)*(size_x/2-2) ) {
                        gout << dot;
                    }
                }
            }
        }
}

void Amoba::handle(event ev)
{

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
