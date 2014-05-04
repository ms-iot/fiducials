// Copyright (c) 2010, 2013 by Wayne C. Gramlich.  All rights reserved.

#if !defined(HIGH_GUI2_C_H_INCLUDED)
#define HIGH_GUI2_C_H_INCLUDED 1

#include <opencv2/highgui/highgui_c.h>

#include "Double.hpp"

typedef CvCapture *CV_Capture;
typedef CvVideoWriter *CV_Video_Writer;

extern CvCapture CV_Capture__Initial;
extern CvVideoWriter CV_Video_Writer__Initial;

extern int CV__capture_any;
extern int CV_Capture__property_frame_width;
extern int CV_Capture__property_frame_height;
extern CV_Capture CV_Capture__create_camera(int camera_number);
extern CV_Capture CV_Capture__create_file(String capture_file_name);
extern int CV_Capture__set_property(
 CV_Capture capture, int property_id, Double value);
extern CV_Image CV_Capture__query_frame(CV_Capture capture);
extern void CV_Image__show(CV_Image image, String window_name);
extern void CV_Capture__release(CV_Capture capture);

extern CV_Video_Writer CV__create_video_writer(String out_file_name,
  int four_cc, Double fps, CV_Size size, int is_color);
extern void CV__destroy_window(String window_name);
extern CV_Image CV__load_image(String image_file_name, int is_color);
extern int CV__named_window(String window_name, int flags);
extern void CV_Capture__release_capture(CV_Capture capture);
extern void CV_Video_Writer__release_video_writer( CV_Video_Writer writer);
extern void CV__show_image(String window_name, CV_Image image);
extern int CV_Video_Writer__write_frame(
  CV_Video_Writer writer, CV_Image frame);
extern int CV__wait_key(int delay);

#endif // !defined(HIGH_GUI2_C_H_INCLUDED)
