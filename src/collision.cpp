#include "collision.h"
#include <cstdio>
#include <iostream>
#include <raylib.h>
#include "test.h"
#include "bird.h"


bool isCollided(Rectangle entity1, Rectangle entity2){
  if(
    bool collision = CheckCollisionRecs(entity1, entity2)){
      return true;
    }else{
      return false;
    }
  // if(
  //   entity1.x < entity2.x + entity2.width &&
  //   entity1.x + entity1.width > entity2.x &&
  //   entity1.y < entity2.y + entity2.height &&
  //   entity1.y + entity1.height > entity2.y 
  // ){
  //   printf("collided\n");
  // }
}