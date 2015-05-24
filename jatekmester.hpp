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
    bool nyer;
public:
    JatekMester( );
    void lepes(vector<Widget*> &amobak, char szin);
    bool nyert(vector<vector<Widget*> > &w);
};


#endif // JATEKMESTER_HPP_INCLUDED
