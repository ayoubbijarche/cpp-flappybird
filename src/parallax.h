#pragma once
#include <raylib.h>
#include <vector>
#include <chrono>

class Parallax{
  public:
    Parallax();
    std::vector<Texture2D> layerarr;
    Texture2D layer1;
    Texture2D layer2;
    float scroll;
    void Draw();
    void Move();
    void Unload();
};