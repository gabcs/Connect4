#include "select_button.hpp"

#include "graphics.hpp"
#include "widgets.hpp"
#include "button.hpp"
#include "amoba.hpp"

using namespace genv;
using namespace std;

Select_Button::Select_Button(int _x, int _y, int _size_x, int _size_y)
              :Button( _x, _y, _size_x, size_y, "OK")
{
               A = NULL;
}

void Select_Button::action()
{

}
