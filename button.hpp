#ifndef BUTTON_HPP_INCLUDED
#define BUTTON_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"

using namespace std;

class Button : public Widget
{
protected:
    int c_r;
    int c_g;
    int c_b;
    string b_text;
public:
    Button( int _x, int _y, int _size_x, int _size_y, string _text);

    virtual void draw();
    virtual void handle( genv::event ev );

    virtual bool is_checked() const;
    virtual void set_checked(bool new_check);
    virtual void set_num(int _num);
    virtual void set_text(string _selected);
    virtual string get_data();

    virtual void action() {}
};

#endif // BUTTON_HPP_INCLUDED
