#ifndef TABLA_HPP_INCLUDED
#define TABLA_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include "amoba.hpp"
#include "button.hpp"

#include <vector>

using namespace genv;
using namespace std;

class Tabla : public Widget
{
protected:
    vector< vector<Widget*> > w;
    int amoba_size_x, amoba_size_y;
public:
    Tabla(int _x, int _y, int _size_x, int _size_y);

    virtual void draw();
    virtual void handle( event ev );
    virtual void action();
};


#endif // TABLA_HPP_INCLUDED