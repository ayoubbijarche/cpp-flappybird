#include <raylib.h>
#include "bird.h"
#include "parallax.h"


int main(){
  SetConfigFlags(FLAG_VSYNC_HINT);
  int w = 400;
  int h = 700;
  InitWindow(w, h, "flappy bird");
  Bird bird = Bird();
  Parallax parallax = Parallax();
  while (!WindowShouldClose()) {
    bird.Jump();
    bird.Init();
    parallax.Move();
    BeginDrawing();
      ClearBackground(DARKGRAY);
      parallax.Draw();
      bird.Draw();
      DrawFPS(0 , 0 );
    EndDrawing();
  }
  bird.Unload();
  parallax.Unload();
  return 0;
}