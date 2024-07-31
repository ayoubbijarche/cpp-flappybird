#include "time.h"
#include <chrono>
#include <raylib.h>
#include <thread>


const float dt = GetFrameTime();

void delay(unsigned int ml){
  std::this_thread::sleep_for(std::chrono::milliseconds(ml));
}