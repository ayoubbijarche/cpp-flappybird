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
    Rectangle rectframe;
    int currentframe;
    int framecounter;
    int framespeed;
    std::vector<Texture2D> sprites;
    void Init();
    void Jump();
    void Draw();
    void Unload();
};