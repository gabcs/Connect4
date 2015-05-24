#include "jatekmester.hpp"

#include "graphics.hpp"
#include "widgets.hpp"
#include "amoba.hpp"
#include "tabla.hpp"
#include "button_select.hpp"

using namespace genv;
using namespace std;

JatekMester::JatekMester( )
{
    lepesszam = 0;
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

        }
    }
}
