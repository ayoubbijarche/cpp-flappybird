#include "test.h"
#include <raylib.h>


Pipe::Pipe(){
  sprite = LoadTexture("./assets/pipe.png");
  pos = {500 , 0};
  velocity = {200.0 , 0};
}

void Pipe::Move(){
  this->pos.x -= this->velocity.x * GetFrameTime();
  if(this->pos.x<=-400) this->pos.x = 500;
}

void Pipe::Draw(){
  DrawTextureV(this->sprite,this->pos , WHITE);
}