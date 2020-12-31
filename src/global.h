#ifndef _GLOBAL_H_
#define _GLOBAL_H_
//LUDO:
# define DVE_RENDER_NORMAL     0
# define DVE_RENDER_FIT        1
# define DVE_RENDER_X15        2
# define DVE_RENDER_MAX        3
# define DVE_RENDER_ROT90      4
# define DVE_LAST_RENDER       4

# define MAX_PATH   256
# define DVE_MAX_SAVE_STATE 5

# define SCR_WIDTH    330
# define SCR_HEIGHT   410

# define BLIT_WIDTH   512
# define BLIT_HEIGHT  410

# define SNAP_WIDTH   110
# define SNAP_HEIGHT  136

# include <psptypes.h>
#include <SDL.h>

  typedef unsigned char byte;
  typedef unsigned short word;
  typedef unsigned int dword;
  typedef unsigned long long ddword;
  
  typedef struct DVE_save_t {

    SDL_Surface    *surface;
    char            used;
    char            thumb;
    ScePspDateTime  date;

  } DVE_save_t;

  typedef struct DVE_t {
 
    DVE_save_t dve_save_state[DVE_MAX_SAVE_STATE];
    char       dve_save_name[MAX_PATH];
    char       dve_home_dir[MAX_PATH];
    int        dve_speed_limiter;
    int        psp_screenshot_id;
    int        psp_cpu_clock;
    int        psp_display_lr;
    int        psp_sound_volume;
    int        dve_color;
    int        dve_snd_enable;
    int        dve_view_fps;
    int        dve_current_fps;
    int        dve_render_mode;
    int        psp_skip_max_frame;
    int        psp_skip_cur_frame;
    int        dve_auto_fire_period;
    int        dve_auto_fire;
    int        dve_auto_fire_pressed;

  } DVE_t;

  extern DVE_t DVE;


//END_LUDO:

# endif
