#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include "definitions.h"
#include "controls.h"
#include "render.h"
#include "load.h"
#define WIDTH  960
#define HEIGHT 576

/* structure is here because idk what i'm doing */

struct {
	int speed;
	int running;
	int fps;
} app;

int main(void) {
	Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, 1, 4096);
	IMG_Init(IMG_INIT_PNG);
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
	window = SDL_CreateWindow("Swagman George", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, 0);
	render = SDL_CreateRenderer(window, 0, 0);

	app.speed 	= 3;
	app.running = 1;
	app.fps 	= 60;
	loadFn();

	Mix_PlayChannel(-1, music, -1);
	
	while (app.running) {
		keystate = SDL_GetKeyboardState(NULL);
		SDL_Event event;
		SDL_PollEvent(&event);
		switch (event.type) {
			case SDL_QUIT: {
				app.running = 0;
				break;
			}
		}

		checkKeystateFn();

		if (playerR.x > WIDTH - playerR.w) {
			playerR.x = WIDTH - playerR.w;
		}
		if (playerR.x < 0) {
			playerR.x = 0;
		}
		if (playerR.y > HEIGHT - playerR.h) {
			playerR.y = HEIGHT - playerR.h;
		}

		if (playerR.y < 0) {
			playerR.y = 0;
		}

		renderFn();
		SDL_Delay(1000 / app.fps);
	}

	printf("\nDestroying everything...\n");
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(render);
	SDL_DestroyTexture(player);
	SDL_DestroyTexture(grass);
	SDL_DestroyTexture(sky);
	SDL_DestroyTexture(dirt);
	SDL_DestroyTexture(def);
	SDL_DestroyTexture(radio);
	Mix_FreeChunk(music);
	Mix_CloseAudio();
	IMG_Quit();
	SDL_Quit();
	printf("Exiting.\n");
	return 0;
}
