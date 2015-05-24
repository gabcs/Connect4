/// Ebben a cpp f�jlban lesz a Widget oszt�ly implement�l�sa
#include "widgets.hpp"
#include "graphics.hpp"
#include <string>

using namespace genv;
using namespace std;

// A Widget oszt�ly konstruktorainak kifejt�se
Widget::Widget( ) {}                                            // Param�ter n�lk�li konstruktor
Widget::Widget( int _x, int _y ) : x(_x), y(_y) {}              // K�t param�teres konstruktor
Widget::Widget( int _x, int _y, int _size_x, int _size_y ) {    // N�gy param�teres konstruktor
    x = _x;
    y = _y;
    size_x = _size_x;
    size_y = _size_y;
    inFocus = false;
}
Widget::Widget( int _x, int _y, int _size_x, int _size_y, int _r, int _g, int _b ) {    // H�t param�teres konstruktor
    x = _x;
    y = _y;
    size_x = _size_x;
    size_y = _size_y;
    r = _r;
    g = _g;
    b = _b;
}

// A Widget oszt�ly is_selected f�ggv�ny�nek kifejt�se
bool Widget::is_selected( int mouse_x, int mouse_y ) const {
    return mouse_x>x && mouse_x<x+size_x && mouse_y>y && mouse_y<y+size_y;
}

void Widget::draw() {
}

void Widget::handle(event ev) {
}

bool Widget::is_checked() const {
    return checked;
}

void Widget::set_checked(bool new_check){
}

string Widget::get_text(){
    return "";
}

void Widget::set_text(string _selected){
}

void Widget::set_num(int _num){
}

int Widget::get_num(){
    return 0;
}

string Widget::get_data(){
    return "";
}

int Widget::get_clicked(){
    return 0;
}

void Widget::set_y(int _y){
}

void Widget::set_focus( bool focus ){
    inFocus = focus;
}
