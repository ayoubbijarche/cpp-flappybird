#include "parallax.h"
#include <raylib.h>
#include <math.h>
#include <cstdlib>
#include <chrono>


Parallax::Parallax(){
  std::srand(std::time(nullptr));
  layerarr ={LoadTexture("assets/bg.png") ,  LoadTexture("assets/bg2.png")};
  layer1 = layerarr[std::rand() % layerarr.size()];
  layer2 = LoadTexture("assets/ground.png");
  scroll = 0.0f;
}


void Parallax::Draw(){
  DrawTextureEx( this->layer1, {this->scroll  , 0.0f}, 0.0f , 1.0f , WHITE);
  DrawTextureEx(this->layer1, (Vector2){this->layer1.width + this->scroll , 0.0f}, 0.0f , 1.0f , WHITE);
  DrawTextureEx( this->layer2, {this->scroll  , 600.0f}, 0.0f , 1.0f , WHITE);
  DrawTextureEx(this->layer2, (Vector2){this->layer2.width + this->scroll , 600.0f}, 0.0f , 1.0f , WHITE);
}

void Parallax::Move(){
  this->scroll -= 200.0f * GetFrameTime();
  float neg = this->layer1.width;
  if(this->scroll <= -neg) this->scroll = 0.0;
}

void Parallax::Unload(){
  UnloadTexture(this->layer1);
  UnloadTexture(this->layer2);
}