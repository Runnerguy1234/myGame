#include <Player.h>

char Player::handleInput(SDL_Event *event) {
  while (SDL_PollEvent(event)) {
    switch (event->type) {
      case SDL_KEYDOWN:
        this->keyboard = SDL_GetKeyboardState(nullptr);
        switch (event->key.keysym.sym) {
          case SDLK_w:
            this->yVelocity = -1 * this->jumpSpeed;
            break;
        }
        break;

      case SDL_KEYUP:
        this->keyboard = SDL_GetKeyboardState(nullptr);
        break;

      case SDL_QUIT:
        return 'Q';
    }
  }
  this->xVelocity = (keyboard[SDL_SCANCODE_A] * -256) + (keyboard[SDL_SCANCODE_D] * 256);

  return 0;
}
