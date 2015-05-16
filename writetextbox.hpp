#ifndef WRITETEXTBOX_HPP_INCLUDED
#define WRITETEXTBOX_HPP_INCLUDED

#include "graphics.hpp"
#include "widgets.hpp"
#include <string>

using namespace std;

class WriteTextBox : public Widget
{
protected:
    string w_text;
    bool checked;
    int b_r;
    int b_g;
    int b_b;
public:
    WriteTextBox( int _x, int _y, int size_x, int size_y, string _w_text );
    virtual void draw();
    virtual void handle( genv::event ev );
    virtual bool is_checked() const;
    virtual void set_checked(bool new_check);
    virtual string get_text();
    virtual void set_text(string _selected);
};

#endif // WRITETEXTBOX_HPP_INCLUDED
