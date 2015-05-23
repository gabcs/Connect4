#ifndef JATEKMESTER_HPP_INCLUDED
#define JATEKMESTER_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"

#include <vector>

using namespace genv;
using namespace std;

class JatekMester
{
protected:
    vector<Widget*> am;
public:
    JatekMester( );
    void lepes(vector<Widget*> &amobak);
};


#endif // JATEKMESTER_HPP_INCLUDED
