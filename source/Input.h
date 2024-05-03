#define ESCAPE 27
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define ENTER 13
#define SHIFT 16
#define CTRL 17
#define TAB 9
#define CAPSLOCK 20
#define SPACE 32
#define DELETE 46

class Input{
public:
    Input();

    void event();
    bool anykey();
    bool keyPressed(int code);
    int get_curentkey();
private:
    int curentKey;
};