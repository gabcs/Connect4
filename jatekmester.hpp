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
    char nyertes;
public:
    JatekMester( );
    void lepes(vector<Widget*> &amobak, char szin);
    bool nyert(vector<vector<Widget*> > &w);
    char get_nyertes();
    void uj_jatek();
};


#endif // JATEKMESTER_HPP_INCLUDED
