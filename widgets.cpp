/// Ebben a cpp fájlban lesz a Widget osztály implementálása
#include "widgets.hpp"
#include "graphics.hpp"
#include <string>

using namespace genv;
using namespace std;

// A Widget osztály konstruktorainak kifejtése
Widget::Widget( ) {}                                            // Paraméter nélküli konstruktor
Widget::Widget( int _x, int _y ) : x(_x), y(_y) {}              // Két paraméteres konstruktor
Widget::Widget( int _x, int _y, int _size_x, int _size_y ) {    // Négy paraméteres konstruktor
    x = _x;
    y = _y;
    size_x = _size_x;
    size_y = _size_y;
    inFocus = false;
}
Widget::Widget( int _x, int _y, int _size_x, int _size_y, int _r, int _g, int _b ) {    // Hét paraméteres konstruktor
    x = _x;
    y = _y;
    size_x = _size_x;
    size_y = _size_y;
    r = _r;
    g = _g;
    b = _b;
}

// A Widget osztály is_selected függvényének kifejtése
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
