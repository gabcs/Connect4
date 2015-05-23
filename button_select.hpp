#ifndef BUTTON_SELECT_HPP_INCLUDED
#define BUTTON_SELECT_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include "button.hpp"
#include <string>
#include <vector>
#include "application.hpp"
#include "tabla.hpp"
#include "amoba.hpp"
#include "jatekmester.hpp"
#include "buttonsetter.hpp"

using namespace genv;
using namespace std;

class Button_Select : public Button
{
protected:
    Amoba* a;
    ButtonSetter* bs;
    JatekMester jatek_mester;
    vector<Widget*> amoba_oszlop;
    char szin;
public:
    Button_Select(int x, int y, int size_x, int size_y);

    virtual void draw();
    virtual void handle(event ev);
    virtual void action();
    void set_a(Amoba* _a){ a = _a; }
    void set_b(ButtonSetter* _bs){ bs = _bs; }
    void set_vector(vector<Widget*> &amobak);
    void set_data(char _szin);
};


#endif // BUTTON_SELECT_HPP_INCLUDED
