#include "definitions.h"

/* I haven't yet made struct app global */

void checkKeystateFn(void) {
	if (keystate[SDL_SCANCODE_UP]) {
		playerR.y -= 3;
	}
	if (keystate[SDL_SCANCODE_DOWN]) {
		playerR.y += 3;
	}
	if (keystate[SDL_SCANCODE_LEFT]) {
		playerR.x -= 3;
	}
	if (keystate[SDL_SCANCODE_RIGHT]) {
		playerR.x += 3;
	}
}