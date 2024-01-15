// #include <gtkmm-3.0/gtkmm/application.h>
#include <main.hpp>
#include <iostream>
#include <string>

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
    std::string next_token;
    while(std::cin >> next_token) {
        std::cout << next_token << std::endl;
    }
    return 0;
}
