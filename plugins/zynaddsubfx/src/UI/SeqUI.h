// generated by Fast Light User Interface Designer (fluid) version 1.0109

#ifndef SeqUI_h
#define SeqUI_h
#include <FL/Fl.H>
#include "../globals.h"
#include "../Misc/Master.h"
#include "WidgetPDial.h"
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Group.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Value_Slider.H>
#include <FL/Fl_Box.H>

class SeqUI {
public:
  Fl_Double_Window* make_window();
  Fl_Double_Window *seqwin;
  Fl_Button *playbutton;
private:
  void cb_playbutton_i(Fl_Button*, void*);
  static void cb_playbutton(Fl_Button*, void*);
public:
  Fl_Button *stopbutton_play;
private:
  void cb_stopbutton_play_i(Fl_Button*, void*);
  static void cb_stopbutton_play(Fl_Button*, void*);
  void cb_Open_i(Fl_Button*, void*);
  static void cb_Open(Fl_Button*, void*);
  void cb_Play_i(Fl_Value_Slider*, void*);
  static void cb_Play(Fl_Value_Slider*, void*);
public:
  SeqUI(Master *master_);
private:
  Master *master; 
public:
  void show();
};
#endif