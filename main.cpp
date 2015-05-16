#include "application.hpp"
#include "graphics.hpp"
#include "amoba.hpp"
#include "tabla.hpp"
#include "select_button.hpp"
#include "button.hpp"

using namespace std;
using namespace genv;

int main()
{
    Application app(640,480, "Potyogtatós amőba");

    Select_Button* sb = new Select_Button(500,400,30,30);
    app.addWidget(sb);
    Amoba* a = new Amoba(530,400,30,30);
    app.addWidget(a);
    sb->set_A(a);

    Button* b =  new Button(600,20,30,30,"OK");
    app.addWidget(b);
    Tabla* t = new Tabla(20,20,50,50);
    app.addWidget(t);

    app.run();

    return 0;
}
