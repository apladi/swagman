#include "definitions.h"

/* Contains the functions that renders (mind blown) */

void renderFn() {
	tile64R.x = 0;
	tile64R.y = 0;

	for (int i = 0; i < 9; ++i) {
		for (int x = 0; x < 15; ++x) {
			switch (level[i][x]) {
				case 0: {
					SDL_RenderCopy(render, sky, NULL, &tile64R);
					break;
				}
				case 1: {
					SDL_RenderCopy(render, grass, NULL, &tile64R);
					break;
				}
				case 2: {
					SDL_RenderCopy(render, dirt, NULL, &tile64R);
					break;
				}
				default: {
					SDL_RenderCopy(render, def, NULL, &tile64R);
				}
			}
			tile64R.x += 64;
		}
		tile64R.x  = 0;
		tile64R.y += 64;
	}

	tile64R.x = 0;
	tile64R.y = 0;

	for (int i = 0; i < 9; ++i) {
		for (int x = 0; x < 15; ++x) {
			switch (other[i][x]) {
				case 0: {
					break;
				}
				case 1: {
					SDL_RenderCopy(render, house1, NULL, &tile64R);
					break;
				}
				case 2: {
					SDL_RenderCopy(render, house2, NULL, &tile64R);
					break;
				}
				case 3: {
					SDL_RenderCopy(render, house3, NULL, &tile64R);
					break;
				}
				case 4: {
					SDL_RenderCopy(render, house4, NULL, &tile64R);
					break;
				}
				default: {
					SDL_RenderCopy(render, def, NULL, &tile64R);
				}
			}
			tile64R.x += 64;
		}
		tile64R.x  = 0;
		tile64R.y += 64;
	}

	tile32R.x = 0;
	tile32R.y = 0;

	for (int i = 0; i < 18; ++i) {
		for (int x = 0; x < 30; ++x) {
			switch (objects[i][x]) {
				case 0: {
					break;
				}
				case 1: {
					SDL_RenderCopy(render, radio, NULL, &tile32R);
					break;
				}
			}
			tile32R.x += 32;
		}
		tile32R.x  = 0;
		tile32R.y += 32;
	}

	SDL_RenderCopy(render, player, NULL, &playerR);
	SDL_RenderPresent(render);
	SDL_RenderClear(render);
}