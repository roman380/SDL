#ifndef SDL_video_hook_h_
#define SDL_video_hook_h_

#include "SDL_stdinc.h"

#include "begin_code.h"
/* Set up for C function definitions, even when using C++ */
#ifdef __cplusplus
extern "C" {
#endif

struct SDL_Window;
typedef void* SDL_GLContext;

typedef struct
{
    void (SDLCALL* After_CreateWindow) (struct SDL_Window*);
    void (SDLCALL* After_GL_CreateContext) (struct SDL_Window*, SDL_GLContext);
    void (SDLCALL* Before_GL_SwapWindow) (struct SDL_Window*);
} SDL_VideoHook;

extern DECLSPEC void SDLCALL SDL_SetVideoHook(const SDL_VideoHook* value);

/* Ends C function definitions when using C++ */
#ifdef __cplusplus
}
#endif
#include "close_code.h"

#endif /* SDL_video_hook_h_ */
