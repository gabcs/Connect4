#ifndef BUTTON_SELECT_HPP_INCLUDED
#define BUTTON_SELECT_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include "button.hpp"
#include <string>
#include <vector>
#include "application.hpp"
#include "tabla.hpp"

using namespace genv;
using namespace std;

class Button_Select : public Button
{
public:
    Button_Select(int x, int y, int size_x, int size_y);

    virtual void draw();
    virtual void handle(event ev);
    virtual void action();
};


#endif // BUTTON_DELETE_HPP_INCLUDED
