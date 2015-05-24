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

void JatekMester::nyert(vector<vector<Widget*> > &w)
{
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            char jatekos = w[i][j]->get_pont();
            ///egy sorban van-e a négy
            if(j-3 >= 0&& j+3 < 7)
            {
                nyer = w[i][j-3]->get_pont() == w[i][j-2]->get_pont() == w[i][j-1]->get_pont() == w[i][j]->get_pont();
                cout << nyer << endl;
            }
        }
    }
    if(nyer == true){gout << move_to(200,400) << text("nyert");}
}
