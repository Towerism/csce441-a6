// generated by Fast Light User Interface Designer (fluid) version 1.0009

#ifndef interface_h
#define interface_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
extern Fl_Window *main_window;
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#ifdef WRITE_JPEGS
extern void save_callback(Fl_Button*, void *);
extern Fl_Button *save_button;
#endif
extern void exit_callback(Fl_Button*, long);
extern Fl_Button *exit_button;
extern void play_callback(Fl_Button*, void*);
extern Fl_Button *pause_button;
extern void load_callback(Fl_Button*, void*);
extern Fl_Button *loadMotion_button;
extern Fl_Button *loadActor_button;
extern void interpolate_callback(Fl_Button*, void*);
//DEGUG: temp
//extern Fl_Button *saveAs_button;
extern Fl_Button *interpolate_button;

extern void locate_callback(Fl_Button*, void*);
extern Fl_Button *locate_button;
extern Fl_Button *rewind_button;
extern void play_callback(Fl_Button*, void *);
extern Fl_Button *play_button;
extern Fl_Button *repeat_button;
#include <FL/Fl_Light_Button.H>
#ifdef WRITE_JPEGS
extern void record_callback(Fl_Light_Button*, void *);
extern Fl_Light_Button *record_button;
#endif
#include <FL/Fl_Value_Slider.H>
extern void fslider_callback(Fl_Value_Slider*, long);
extern Fl_Value_Slider *frame_slider;
extern void redisplay_proc(Fl_Light_Button*, long);
extern Fl_Light_Button *light_button;
extern Fl_Light_Button *background_button;
#include "player.h"
extern Player_Gl_Window *glwindow;
#include <FL/Fl_Value_Input.H>
extern void valueIn_callback(Fl_Value_Input*, void*);
extern Fl_Value_Input *joint_idx;
extern Fl_Value_Input *fsteps;
extern void sub_callback(Fl_Value_Input*, void*);
extern Fl_Value_Input *sub_input;
extern void dt_callback(Fl_Value_Input*, void*);
extern Fl_Value_Input *dt_input;

extern void tx_callback(Fl_Value_Input*, void*);
extern Fl_Value_Input *tx_input;
extern void ty_callback(Fl_Value_Input*, void*);
extern Fl_Value_Input *ty_input;
extern void tz_callback(Fl_Value_Input*, void*);
extern Fl_Value_Input *tz_input;

extern void rx_callback(Fl_Value_Input*, void*);
extern Fl_Value_Input *rx_input;
extern void ry_callback(Fl_Value_Input*, void*);
extern Fl_Value_Input *ry_input;
extern void rz_callback(Fl_Value_Input*, void*);
extern Fl_Value_Input *rz_input;

Fl_Window* make_window();
#endif
