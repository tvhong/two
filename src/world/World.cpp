#include "World.h"
#include "const_and_enum.h.h"
#include <cstdlib>
#include <time.h>

World::World(Terrain terrain) :
    Puck(Point(BOARD_WIDTH/2.0, BOARD_HEIGHT/2.0), PUCK_DEF_RADIUS, PUCK_DEF_WEIGHT),
    mallet_p1_(Point(BOARD_HEIGHT - (M_INIT_TOP_BOT_MARGIN + M_DEF_RADIUS/2.0), BOARD_WIDTH/2.0),
               M_DEF_RADIUS, M_DEF_WEIGHT, M_DEF_BASE_SPEED, M_DEF_DASH_SPEED, M_DEF_MAX_EP),
    mallet_p2_(Point(M_INIT_TOP_BOT_MARGIN + M_DEF_RADIUS/2.0, BOARD_WIDTH/2.0),
               M_DEF_RADIUS, M_DEF_WEIGHT, M_DEF_BASE_SPEED, M_DEF_DASH_SPEED, M_DEF_MAX_EP),
    stars_p1_(N_STARS),
    stars_p2_(N_STARS),
    terrain_(terrain) {

  srand(time(NULL));
  for (int i = 0; i < N_STARS; ++i) {


  }
}
