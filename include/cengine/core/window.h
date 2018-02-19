
#ifndef WINDOW_H
#define WINDOW_H

#include <preprocessor.h>
#include <utils/string_utils.h>

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

typedef struct Window_s WINDOW;

#ifdef __cplusplus
extern "C"
{
#endif

    CENGINE_API WINDOW*     CENGINE_CALL create_window(STRING* title, int width, int height);
    CENGINE_API bool        CENGINE_CALL window_is_closed(WINDOW* p_window);
    CENGINE_API void        CENGINE_CALL window_update(WINDOW* p_window);
    CENGINE_API void        CENGINE_CALL window_clear(WINDOW* p_window, float r, float g, float b, float a);
    CENGINE_API int         CENGINE_CALL window_get_width(WINDOW* p_window);
    CENGINE_API int         CENGINE_CALL window_get_height(WINDOW* p_window);
    CENGINE_API bool        CENGINE_CALL window_was_resized(WINDOW* p_window);
    CENGINE_API void        CENGINE_CALL window_close(WINDOW* p_window);
    CENGINE_API void        CENGINE_CALL window_enable_vsync(WINDOW* p_window, bool enable);
    CENGINE_API void        CENGINE_CALL window_set_fullscreen(WINDOW* p_window, bool doSet);
    CENGINE_API void        CENGINE_CALL window_set_resizable(WINDOW* p_window, bool resizable);
    CENGINE_API GLFWwindow* CENGINE_CALL window_get_context(WINDOW* p_window);
    CENGINE_API void        CENGINE_CALL free_window(WINDOW* p_window);

#ifdef __cplusplus
}
#endif

#endif // WINDOW_H
