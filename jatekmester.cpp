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

}

void JatekMester::lepes(vector<Widget*> &amobak)
{
    am = amobak;
    for(int i = amobak.size()-1; i > -1; i--)
    {
        if(amobak[i]->get_pont() == 'a'){ amobak[i]->set_pont('b'); i = -1; }
    }
}
