#include "jatekmester.hpp"

#include "graphics.hpp"
#include "widgets.hpp"
#include "amoba.hpp"
#include "tabla.hpp"
#include "button_select.hpp"
#include <iostream>

using namespace genv;
using namespace std;

JatekMester::JatekMester( )
{
    nyer == false;
}

void JatekMester::lepes(vector<Widget*> &amobak, char szin)
{
    for(int i = amobak.size()-1; i > -1; i--)
    {
        if(amobak[i]->get_pont() == 'a'){ amobak[i]->set_pont(szin); i = -1; }
    }
}

bool JatekMester::nyert(vector<vector<Widget*> > &w)
{
    for( unsigned int j = 0; j < 6; j++ )
    {
    for( unsigned int i = 0; i <7; i++ )
    {
        ///piros játékos
        if(w[i][j]->get_pont() == 'b')
        {
            ///van-e négy egy sorban
            if( i+3 < 7 )
            {
                if( w[i+1][j]->get_pont() == 'b' && w[i+2][j]->get_pont() == 'b' && w[i+3][j]->get_pont() == 'b'){ nyer = true; }
            }
            ///van-e négy egy oszlopban
            if( j+3 < 6 )
            {
                if( w[i][j+1]->get_pont() == 'b' && w[i][j+2]->get_pont() == 'b' && w[i][j+3]->get_pont() == 'b'){ nyer = true; }
            }
            ///van-e négy átlósan
            if(i+3 < 7 && j+3 < 6 )
            {
                if( w[i+1][j+1]->get_pont() == 'b' && w[i+2][j+2]->get_pont() == 'b' && w[i+3][j+3]->get_pont() == 'b'){ nyer = true; }
            }
            if(i+3 < 7 && j-3 > 0 )
            {
                if( w[i+1][j-1]->get_pont() == 'b' && w[i+2][j-2]->get_pont() == 'b' && w[i+3][j-3]->get_pont() == 'b'){ nyer = true; }
            }
        }
        ///sárga játékos
        if(w[i][j]->get_pont() == 'c')
        {
            ///van-e négy egy sorban
            if( i+3 < 7 )
            {
                if( w[i+1][j]->get_pont() == 'c' && w[i+2][j]->get_pont() == 'c' && w[i+3][j]->get_pont() == 'c'){ nyer = true; }
            }
            ///van-e négy egy oszlopban
            if( j+3 < 6 )
            {
                if( w[i][j+1]->get_pont() == 'b' && w[i][j+2]->get_pont() == 'b' && w[i][j+3]->get_pont() == 'b'){ nyer = true; }
            }
            ///van-e négy átlósan
            if(i+3 < 7 && j+3 < 6 )
            {
                if( w[i+1][j+1]->get_pont() == 'b' && w[i+2][j+2]->get_pont() == 'b' && w[i+3][j+3]->get_pont() == 'b'){ nyer = true; }
            }
            if(i+3 < 7 && j-3 > 0 )
            {
                if( w[i+1][j-1]->get_pont() == 'b' && w[i+2][j-2]->get_pont() == 'b' && w[i+3][j-3]->get_pont() == 'b'){ nyer = true; }
            }
        }
    }
    }
    return nyer;
}
