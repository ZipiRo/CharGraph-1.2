class Input{
public:
    Input();

    void event();
    bool keyPressed(int code);
    int get_curentkey();
private:
    int curentKey;
};