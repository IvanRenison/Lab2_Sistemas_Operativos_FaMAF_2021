#include "types.h"

typedef int x_coord;
typedef int y_coord;

typedef int width;
typedef int height;

typedef float distance;
typedef float speed;
typedef float acceleration;


#define offset_tubes 60



struct game_status
{
  distance flappy_pos_x;
  distance flappy_pos_y;

  speed vertical_speed;

  x_coord first_tube_x;
  y_coord hole_tubes_y[VGA_graphic_width / offset_tubes + 1];

  bool is_alive;
};


