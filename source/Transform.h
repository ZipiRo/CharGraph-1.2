class Transform{
public:
    Vector2D position;
    Vector2D scale;

    Transform();
    Transform(int x, int y, int width, int height);
    Transform(Vector2D position, Vector2D scale);
};
