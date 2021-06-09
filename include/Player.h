#ifndef Player_h
#define Player_h

#include <Entity.h>

class Player : public Entity {
  public:
    float movementSpeed;
    float jumpAcceleration;

    void handleInput();

  private:
    const uint8_t *keyboard;
}

#endif