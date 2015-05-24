#include "application.hpp"
#include "graphics.hpp"
#include "amoba.hpp"
#include "tabla.hpp"
#include "button.hpp"
#include "button_start.hpp"

using namespace std;
using namespace genv;

int main()
{
    Application* app = new Application(640,480, "Potyogtatós amőba");

    Button_Start* bs = new Button_Start(5,5,75,30);
    app->addWidget(bs);
    bs->set_application(app);

    app->run();

    return 0;
}
