#include <iostream>
#include <gtkmm.h>

using namespace std;


int main(int argc, char *argv[]){

    auto app = Gtk::Application::create(argc, argv, "Geno 3000");

    Gtk::Window window;
    window.set_default_size(200, 200);

    app->run(window);

    return 0;
}