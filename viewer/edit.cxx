// generated by Fast Light User Interface Designer (fluid) version 1.0011

#include "edit.h"

Fl_Input *dt=(Fl_Input *)0;

Fl_Input *tx=(Fl_Input *)0;

Fl_Input *ty=(Fl_Input *)0;

Fl_Input *tz=(Fl_Input *)0;

Fl_Input *rx=(Fl_Input *)0;

Fl_Input *ry=(Fl_Input *)0;

Fl_Input *rz=(Fl_Input *)0;

static Fl_Window* make_edit_window() {
  Fl_Window* w;
  { Fl_Window* o = new Fl_Window(471, 283);
    w = o;
    { Fl_Tile* o = new Fl_Tile(60, 25, 395, 235);
      dt = new Fl_Input(65, 50, 80, 25, "dt");
      tx = new Fl_Input(65, 80, 80, 25, "tx");
      ty = new Fl_Input(65, 110, 80, 25, "ty");
      tz = new Fl_Input(65, 140, 80, 25, "tz");
      rx = new Fl_Input(195, 80, 80, 25, "rx");
      ry = new Fl_Input(195, 110, 80, 25, "ry");
      rz = new Fl_Input(195, 140, 80, 25, "rz");
      o->end();
    }
    o->end();
  }
  return w;
}
