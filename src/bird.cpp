#include "bird.h"
#include <raylib.h>
#include <iostream>


Bird::Bird(){
  G = 900.0f;
  jumpH = 500.0f;
  rotateDeg = 40;
  velocity = {0 , 0};
  //sprite = {LoadTexture("assets/bird1.png") , LoadTexture("assets/bird2.png") , LoadTexture("assets/bird3.png")};
  sprite = LoadTexture("assets/bird.png");
  rectframe = {0.0 , 0.0 , (float)sprite.width , (float)sprite.height/3};
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
  DrawTextureRec(this->sprite, this->rectframe , this->pos, WHITE);
}

void Bird::Unload(){
  UnloadTexture(this->sprite);
}

void Bird::Init(){
  this->framecounter++;
  if(this->framecounter>= (60/framespeed)){
    framecounter = 0;
    currentframe++;
    if(currentframe>2) currentframe = 0;
  }
}

// Bird::Bird(){
//   G = 900.0f;
//   jumpH = 500.0f;
//   rotateDeg = 40;
//   velocity = {0 , 0};
//   //sprite = {LoadTexture("assets/bird1.png") , LoadTexture("assets/bird2.png") , LoadTexture("assets/bird3.png")};
//   sprite = LoadTexture("assets/bird1.png");
//   pos = {180 , 300};
// }

// void Bird::Jump(){
//   this->velocity.y += this->G * GetFrameTime();
//   this->pos.y += velocity.y * GetFrameTime();
//   if(IsKeyPressed(KEY_SPACE)|| IsMouseButtonPressed(0)){
//     std::cout<<"pressed space"<<std::endl;
//     this->velocity.y += -(float)this->jumpH;
//   }
// }

// void Bird::Draw(){
 
//   DrawTextureV(this->sprite, this->pos , WHITE);
// }

// void Bird::Unload(){
//   UnloadTexture(this->sprite);
// }

