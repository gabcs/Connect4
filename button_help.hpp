#ifndef BUTTON_HELP_HPP_INCLUDED
#define BUTTON_HELP_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include "button.hpp"
#include <string>

using namespace genv;
using namespace std;

class Button_Help : public Button
{
public:
    Button_Help(int _x, int _y, int _size_x, int _size_y);
    void handle(event ev);
    void action();
    void draw();
};

#endif // BUTTON_HELP_HPP_INCLUDED
