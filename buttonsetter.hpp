#ifndef BUTTONSETTER_HPP_INCLUDED
#define BUTTONSETTER_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include "button.hpp"
#include <string>
#include "application.hpp"
#include "tabla.hpp"

using namespace genv;
using namespace std;

class Button_Setter : public Button
{
protected:
    unsigned int lepesszam;
    char szin;
public:
    Button_Setter();

    virtual void draw();
    virtual void handle(event ev);
    virtual void action();
};

#endif // BUTTONSETTER_HPP_INCLUDED
