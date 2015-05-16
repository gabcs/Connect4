#include "application.hpp"
#include "graphics.hpp"
#include "amoba.hpp"

using namespace std;
using namespace genv;

int main()
{
    Application app(640,480, "Potyogtatós amőba");
    Amoba* a1 = new Amoba(150,20,30,30);
    app.addWidget(a1);
    a1->set_pont('a');
    Amoba* a2 = new Amoba(150,50,30,30);
    app.addWidget(a2);
    a2->set_pont('b');
    Amoba* a3 = new Amoba(150,80,30,30);
    app.addWidget(a3);
    a3->set_pont('c');
    app.run();

    return 0;
}
