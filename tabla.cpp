#include "tabla.hpp"

#include "graphics.hpp"
#include "widgets.hpp"
#include "select_button.hpp"
#include "amoba.hpp"

#include <vector>

using namespace genv;
using namespace std;

Tabla::Tabla(int _x, int _y, int _size_x, int _size_y)
      :Widget(_x, _y, 7*_size_x, 6*_size_y, 125, 125, 125)
{
        amoba_size_x = _size_x;
        amoba_size_y = _size_y;
        for(unsigned int i = 0; i <= 6; i++)
        {
           vector<Widget*> t;
           for(unsigned int j=0; j<=6; j++)
           {
               if(j==0)
                {
                    Select_Button* sb = new Select_Button(x+i*amoba_size_x,y,amoba_size_x,amoba_size_y);
                    t.push_back(sb);
                }
               Amoba* a = new Amoba( x+i*amoba_size_x, y+(j+1)*amoba_size_y, amoba_size_x, amoba_size_y );
               t.push_back(a);
           }
           w.push_back(t);
        }
}

void Tabla::draw()
{
    for(unsigned int i = 0; i <= 6; i++)
    {
        for(unsigned int j  = 0; j <= 6; j++)
        {
            w[i][j]->draw();
        }
    }
}

void Tabla::handle(event ev)
{

}

void Tabla::action()
{

}
