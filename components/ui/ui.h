
#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
    // SCREEN: ui_mainScreen
    void ui_mainScreen_screen_init(void);
    extern lv_obj_t *ui_mainScreen;
    extern lv_obj_t *ui_label1;
    extern lv_obj_t *ui____initial_actions0;

    void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
