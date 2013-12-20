//#ifndef TWO_ABILITY_ABILITYMANAGER_H_
#define TWO_ABILITY_ABILITYMANAGER_H_

#include <stdint.h>
#include "input/input.h"
#include "world/world.h"
#include "world/puck.h"
#include "world/mallet.h"
#include "ability/ability.h"

#define null 0

enum PlayerAction;
enum WorldEventType;
enum WallSide;

class Puck;
class Mallet;
class Star;

class AbilityManager {
 public:
  void update(int64_t time);
  void processInput(PlayerAction pa);

  void notify(WorldEventType event, Puck &p, Mallet &m);
  void notify(WorldEventType event, Puck &p, WallSide ws);
  void notify(WorldEventType event, Puck &p, Star &s);

}