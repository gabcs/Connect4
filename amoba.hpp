#ifndef AMOBA_HPP_INCLUDED
#define AMOBA_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"

using namespace genv;
using namespace std;

class Amoba : public Widget
{
protected:
    char pont; // a = üres, b = piros játékos, c = sárga játékos
public:
    Amoba(int _x, int _y, int _size_x, int _size_y);

    virtual void draw();
    virtual void handle( event ev );
    virtual void action();
    virtual void set_pont(char new_pont);
    virtual char get_pont();
};

#endif // AMOBA_HPP_INCLUDED
