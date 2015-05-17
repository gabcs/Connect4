#include "application.hpp"
#include "graphics.hpp"
#include "amoba.hpp"
#include "tabla.hpp"
#include "button.hpp"

using namespace std;
using namespace genv;

int main()
{
    Application app(640,480, "Potyogtatós amőba");

    Tabla* t = new Tabla(20,20,50,50);
    app.addWidget(t);

    app.run();

    return 0;
}
