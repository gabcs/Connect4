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

using namespace genv;
using namespace std;

class Button_Select : public Button
{
protected:
    Amoba* a;
    JatekMester jatek_mester;
    vector<Widget*> amoba_oszlop;
public:
    Button_Select(int x, int y, int size_x, int size_y);

    virtual void draw();
    virtual void handle(event ev);
    virtual void action();
    void set_a(Amoba* _a){ a = _a; }
    void set_vector(vector<Widget*> &amobak);
};


#endif // BUTTON_DELETE_HPP_INCLUDED
