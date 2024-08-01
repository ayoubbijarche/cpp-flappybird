#include "test.h"
#include <raylib.h>


Pipe::Pipe(){
  sprite = LoadTexture("./assets/pipe.png");
  rectpipe = {0.0 , 0.0 , (float)this->sprite.width , (float)this->sprite.height};
  pos = {500 , 0};
  velocity = {200.0 , 0};
}

void Pipe::Move(){
  this->pos.x -= this->velocity.x * GetFrameTime();
  if(this->pos.x<=-400) this->pos.x = 500;
}

void Pipe::Draw(){
  DrawTextureRec( this->sprite,this->rectpipe , this->pos , WHITE);
}