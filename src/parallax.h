#pragma once
#include <raylib.h>

class Parallax{
  public:
    Parallax();
    Texture2D layer1;
    Texture2D layer2;
    float scroll;
    void Draw();
    void Move();
    void Unload();
};