#include <cstdio>
#include <raylib.h>
#include "bird.h"
#include "collision.h"
#include "parallax.h"
#include "test.h"
#include <iostream>


int main(){
  SetConfigFlags(FLAG_VSYNC_HINT);
  int w = 400;
  int h = 700;
  InitWindow(w, h, "flappy bird");
  Bird bird = Bird();
  Parallax parallax = Parallax();
  Pipe pipe = Pipe();
  bool collision = false;    

  while (!WindowShouldClose()) {
    bird.Jump();
    bird.Init();
    parallax.Move();
    pipe.Move();
    if(
    isCollided(bird.rectframe , pipe.rectpipe)
    ) collision = true;
    
    BeginDrawing();
      ClearBackground(DARKGRAY);
      parallax.Draw();
      bird.Draw();
      pipe.Draw();
      if(collision){
        DrawText("collided", 10 , 10 , 20 ,  GREEN);
      }else if(!collision){
        DrawText("collided", 10 , 10 , 20 ,  RED);
      }
      DrawFPS(0 , 0 );
    EndDrawing();
  }  
  bird.Unload();
  parallax.Unload();
  return 0;
}