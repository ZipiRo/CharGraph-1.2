#define Up Vector2D(0, -1)
#define Down Vector2D(0, 1)
#define Left Vector2D(-1, 0)
#define Right Vector2D(1, 0)
#define Zero Vector2D(0, 0)

class Vector2D{
public:
    int x;
    int y;
    
    Vector2D();
    Vector2D(int x, int y);
};