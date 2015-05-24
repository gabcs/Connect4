#ifndef STATICTEXTBOX_HPP_INCLUDED
#define STATICTEXTBOX_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include <string>

using namespace std;

class StaticTextBox : public Widget
{
protected:
    string s_text;
    int b_r;
    int b_g;
    int b_b;
public:
    StaticTextBox( int _x, int _y, int _size_x, int _size_y, string _s_text );

    virtual void draw();
    virtual void handle( genv::event ev );

    virtual bool is_checked() const;
    virtual string get_text();
    virtual void set_text(string _selected);
    virtual void set_checked(bool new_check);
    virtual string get_data();
    void set_color(int _r, int _g, int _b);
};

#endif // STATICTEXTBOX_HPP_INCLUDED
