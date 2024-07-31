#pragma once
#include <raylib.h>
#include <vector>

class Bird{
  public:
    Bird();
    float jumpH;
    int rotateDeg;
    float G;
    Vector2 pos;
    Vector2 velocity;
    Texture2D sprite;
    //std::vector<Texture2D> sprite;
    void Jump();
    void Draw();
    void Unload();
};