#ifndef SELECT_BUTTON_HPP_INCLUDED
#define SELECT_BUTTON_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include "button.hpp"
#include "application.hpp"
#include "amoba.hpp"

using namespace genv;
using namespace std;

class Select_Button : public Button
{
protected:
    Amoba* A;
public:
    Select_Button(int _x, int _y, int _size_x, int _size_y);

    void set_A(Amoba* _a) { A = _a; }
    virtual void action();
};

#endif // SELECT_BUTTON_HPP_INCLUDED
