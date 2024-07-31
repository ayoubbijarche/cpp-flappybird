#include "bird.h"
#include <raylib.h>
#include <iostream>

Bird::Bird(){
  G = 900.0f;
  jumpH = 500.0f;
  rotateDeg = 40;
  velocity = {0 , 0};
  //sprite = {LoadTexture("assets/bird1.png") , LoadTexture("assets/bird2.png") , LoadTexture("assets/bird3.png")};
  sprite = LoadTexture("assets/bird1.png");
  pos = {180 , 300};
}

void Bird::Jump(){
  this->velocity.y += this->G * GetFrameTime();
  this->pos.y += velocity.y * GetFrameTime();
  if(IsKeyPressed(KEY_SPACE)|| IsMouseButtonPressed(0)){
    std::cout<<"pressed space"<<std::endl;
    this->velocity.y += -(float)this->jumpH;
  }
}

void Bird::Draw(){
 
  DrawTextureV(this->sprite, this->pos , WHITE);
}

void Bird::Unload(){
}
