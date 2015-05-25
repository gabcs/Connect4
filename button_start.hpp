#ifndef BUTTON_START_HPP_INCLUDED
#define BUTTON_START_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include "button.hpp"
#include <string>
#include <vector>
#include "application.hpp"
#include "tabla.hpp"

using namespace genv;
using namespace std;

class Button_Start : public Button
{
protected:
    Application* _app;
    Tabla* _t;
    bool new_game;
public:
    Button_Start(int _x, int _y, int _size_x, int _size_y);
    void handle(event ev);
    void action();
    void set_application(Application* __app);
};

#endif // BUTTON_START_HPP_INCLUDED
