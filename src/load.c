#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include "definitions.h"

/* Function for loading all textures and checking if they loaded or not */

void loadFn() {
	player  = IMG_LoadTexture(render, "textures/player.png");
	grass   = IMG_LoadTexture(render, "textures/grass.png");
	sky     = IMG_LoadTexture(render, "textures/sky.png");
	dirt    = IMG_LoadTexture(render, "textures/dirt.png");
	def 	= IMG_LoadTexture(render, "textures/default.png");
	radio 	= IMG_LoadTexture(render, "textures/radio.png");
	house1  = IMG_LoadTexture(render, "textures/house1.png");
	house2  = IMG_LoadTexture(render, "textures/house2.png");
	house3  = IMG_LoadTexture(render, "textures/house3.png");
	house4  = IMG_LoadTexture(render, "textures/house4.png");

	music = Mix_LoadWAV("sounds/swag1.mp3");

	if (player == NULL) printf("ERROR: COULD NOT LOAD TEXTURE FOR PLAYER\n");
	if (grass  == NULL) printf("ERROR: COULD NOT LOAD TEXTURE FOR GRASS\n");
	if (sky    == NULL) printf("ERROR: COULD NOT LOAD TEXTURE FOR SKY\n");
	if (dirt   == NULL) printf("ERROR: COULD NOT LOAD TEXTURE FOR DIRT\n");
	if (def    == NULL) printf("ERROR: COULD NOT LOAD TEXTURE FOR DEFAULT (no texture)\n");
	if (radio  == NULL) printf("ERROR: COULD NOT LOAD TEXTURE FOR RADIO\n");
	if (house1 == NULL) printf("ERROR: COULD NOT LOAD TEXTURE FOR HOUSE1\n");
	if (house2 == NULL) printf("ERROR: COULD NOT LOAD TEXTURE FOR HOUSE2\n");
	if (house3 == NULL) printf("ERROR: COULD NOT LOAD TEXTURE FOR HOUSE3\n");
	if (house4 == NULL) printf("ERROR: COULD NOT LOAD TEXTURE FOR HOUSE4\n");

	playerR.w = 13 * 3;
	playerR.h = 29 * 3;
	playerR.x = (0 + playerR.w);
	playerR.y = (0 + playerR.h);

	tile64R.w = 64;
	tile64R.h = 64;
	tile64R.x = 0;
	tile64R.y = 0;

	tile32R.w = 32;
	tile32R.h = 32;
	tile32R.x = 0;
	tile32R.y = 0;

	printf("Loading complete.\n");
}