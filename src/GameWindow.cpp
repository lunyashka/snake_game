#include"GameWindow.h"

namespace lun
{
    GameWindow::GameWindow():
    m_w(100), m_h(100)
    {}

    GameWindow::GameWindow(int width, int height):
    m_w(width), m_h(height)
    {}

    GameWindow::~GameWindow(){}
    
}