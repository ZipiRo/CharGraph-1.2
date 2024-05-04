struct Position
{
    int x;
    int y;
};


class Transform
{
public:
    Position position;

    Transform();
    Transform(int x, int y);
};
