#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

extern int objects[18][30];
extern int other[9][15];
extern int level[9][15];

extern const uint8_t *keystate;
extern SDL_Window    *window;
extern SDL_Renderer  *render;
extern SDL_Texture   *player;
extern SDL_Texture   *grass;
extern SDL_Texture   *sky;
extern SDL_Texture   *dirt;
extern SDL_Texture   *def;
extern SDL_Texture   *radio;
extern SDL_Texture   *house1;
extern SDL_Texture   *house2;
extern SDL_Texture   *house3;
extern SDL_Texture   *house4;
extern Mix_Chunk     *music;
extern SDL_Rect	     playerR;
extern SDL_Rect	     tile64R;
extern SDL_Rect	     tile32R;