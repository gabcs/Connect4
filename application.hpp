#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "widgets.hpp"
#include <vector>

class Application {                                          /// grafikus alkalmazás
    protected:
        std::vector<Widget*> widgets;                        /// az alkalmazás vezérlői
        int focused;                                         /// megadja, hogy melyik vezérlõn van a fókusz
        bool isExiting;                                      /// kilépés alatt áll-e a program
        int SX, SY;                                          /// képernyõ méret
        std::string name;                                    /// az alkalmazás neve
        canvas kep;
        int _width, _height;
        unsigned short cr, cg, cb;

    public:
        Application( int _SX, int _SY, std::string _name );  /// ablak méret és név alapján program létrehozása
        void addWidget( Widget *w );                         /// új vezérlõ felvétele
        void run();                                          /// futtatás
        void shutdown();                                     /// leállítás
        void rajzol();

        int width() const { return SX; }
        int height() const { return SY; }
};

#endif // APPLICATION_HPP
