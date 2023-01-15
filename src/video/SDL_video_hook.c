#include "../SDL_internal.h"

#include "SDL.h"
#include "SDL_video.h"
#include "SDL_video_hook.h"

extern SDL_VideoHook video_hook;

SDL_VideoHook video_hook;

void 
SDL_SetVideoHook(const SDL_VideoHook* value)
{
    video_hook = *value; /* SUGG: Thread safety */
}
