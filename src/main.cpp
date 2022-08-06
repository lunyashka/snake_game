#include<iostream>

#include"GameWindow.h"

int main(){
    auto window = lun::GameWindow();

    std::cout << window.get_width() << '_' << window.get_height() << std::endl;
}
