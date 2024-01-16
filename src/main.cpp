// #include <gtkmm-3.0/gtkmm/application.h>
#include <iostream>
#include <main.hpp>

#include "tokenizer.hpp"
#include "mork/file.hpp"

MyWindow::MyWindow() {
    set_title("Basic application");
    set_default_size(200, 200);
}

/*
int main(int argc, char** argv) {
    auto app = Gtk::Application::create("com.github.vishnu-ranganath.thunderbird-tray-icon");

    return app->make_window_and_run<MyWindow>(argc, argv);
}
*/

int main(int argc, char** argv) {
    Tokenizer::init(std::cin);
    while(Tokenizer::has_next_token()) {
        std::cout << Tokenizer::get_token() << std::endl;
    }
    Mork::File f;
    return 0;
}
