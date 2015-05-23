#ifndef WIDGETS_HPP_INCLUDED
#define WIDGETS_HPP_INCLUDED

#include "graphics.hpp"
#include <string>
#include <vector>

using namespace genv;
using namespace std;

class Widget {
    protected:
        int x, y, size_x, size_y, r, g, b;
        bool checked;
        bool inFocus;

    public:
        Widget( );
        Widget( int _x, int _y );
        Widget( int _x, int _y, int _size_x, int _size_y );
        Widget( int _x, int _y, int _size_x, int _size_y, int r, int g, int b);

        virtual bool is_selected( int mouse_x, int mouse_y ) const;
        virtual void draw();
        virtual void handle( event ev );
        virtual bool is_checked() const;
        virtual void set_checked(bool new_check);
        virtual string get_text();
        virtual void set_text(string _selected);
        virtual void set_num(int _num);
        virtual int get_num();
        virtual string get_data();
        virtual int get_clicked();
        virtual void set_y(int _y);
        virtual void action() {}
        virtual char get_pont(){}
        virtual void set_pont(char new_pont){}
        virtual void set_vector(vector<Widget*> &w){}

        void set_focus( bool focus );
        bool is_focused() const { return inFocus;   }               // Fókuszban van-e még a widget
        int positionX() const   { return x;         }
        int positionY() const   { return y;         }
        int width() const       { return size_x;    }
        int height() const      { return size_y;    }
        };

#endif // WIDGETS_HPP_INCLUDED
