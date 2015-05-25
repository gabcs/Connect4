#include "application.hpp"
#include "button_start.hpp"
#include "button_help.hpp"

using namespace std;
using namespace genv;

int main()
{
    Application* app = new Application(640,510, "Potyogtatós amőba");

    Button_Start* bs = new Button_Start(5,5,75,30);
    Button_Help* bh = new Button_Help(560,5,75,30);
    app->addWidget(bs);
    app->addWidget(bh);
    bs->set_application(app);

    app->run();

    return 0;
}
