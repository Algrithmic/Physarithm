#include <iostream>
#include <stdexcept>

#include "Core/Application.hpp"

int main( void ) {
    try {
        Core::Application app;
        app.run();
    }
    catch (std::exception const &e) {
        std::cerr << "Fatal: " << e.what() << '\n';
        return 1;
    }

    return 0;
}