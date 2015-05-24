#include "tabla.hpp"

#include "graphics.hpp"
#include "widgets.hpp"
#include "amoba.hpp"
#include "button_select.hpp"

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

           Button_Select* bs = new Button_Select(x+i*amoba_size_x,y,amoba_size_x,amoba_size_y);
           b.push_back(bs);
           for(unsigned int j=0; j<=5; j++)
           {
               Amoba* a = new Amoba( x+i*amoba_size_x, y+(j+1)*amoba_size_y, amoba_size_x, amoba_size_y );
               t.push_back(a);
               bs->set_a(a);
           }
           w.push_back(t);
        }
    for(unsigned int i = 0; i <= 6; i++){ b[i]->set_vector(w[i]); }
    szin = 'b';
    lepesszam = 0;
}

void Tabla::draw()
{
    for(unsigned int i = 0; i <= 6; i++)
    {
        b[i]->draw();
        for(unsigned int j  = 0; j <= 5; j++)
        {
            w[i][j]->draw();
        }
    }
}

void Tabla::handle(event ev)
{

    for(unsigned int i = 0; i <= 6; i++)
    {
        b[i]->handle(ev);
        if(b[i]->is_checked() == true)
            {
                lepesszam = lepesszam + 1;
                if( lepesszam%2 == 0 ){ szin = 'b'; }
                if( lepesszam%2 == 1 ){ szin = 'c'; }
                b[i]->set_data(szin);
                b[i]->action();
            }
    }
}

void Tabla::action()
{

}
