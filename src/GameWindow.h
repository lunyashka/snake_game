#ifndef GAME_WINDOW
#define GAME_WINDOW

namespace lun
{
    class GameWindow
    {
    public:

        GameWindow();
        GameWindow(int width, int height);
        ~GameWindow();

        inline const int& get_width() const { return m_w; }
        inline const int& get_height() const { return m_h; }

    private:
        int m_w;
        int m_h;
    };
}

#endif //GAME_WINDOW