#pragma once

#include <raylib.h>
class Pipe{
  public:
    Pipe();
    Rectangle rectpipe;
    Texture2D sprite;
    Vector2 pos;
    Vector2 velocity;
    void Move();
    void Draw();
};