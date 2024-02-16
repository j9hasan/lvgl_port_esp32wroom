SET(SOURCES
    screens/ui_mainScreen.c
    ui.c
    ui_helpers.c)
idf_component_register(SRCS ${SOURCES}
                       INCLUDE_DIRS .
                       REQUIRES lvgl)
