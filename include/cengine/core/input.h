
#ifndef INPUT_H
#define INPUT_H

#include <core/window.h>
#include <preprocessor.h>

#define MAX_KEYS 1024
#define MAX_MOUSE_BTNS 32

#define UNKNOWN         GLFW_KEY_UNKNOWN
#define SPACE           GLFW_KEY_SPACE
#define APOSTROPHE      GLFW_KEY_APOSTROPHE
#define COMMA           GLFW_KEY_COMMA
#define PERIOD          GLFW_KEY_PERIOD
#define MINUS           GLFW_KEY_MINUS
#define ZERO            GLFW_KEY_0
#define ONE             GLFW_KEY_1
#define TWO             GLFW_KEY_2
#define THREE           GLFW_KEY_3
#define FOUR            GLFW_KEY_4
#define FIVE            GLFW_KEY_5
#define SIX             GLFW_KEY_6
#define SEVEN           GLFW_KEY_7
#define EIGHT           GLFW_KEY_8
#define NINE            GLFW_KEY_9
#define SEMICOLON       GLFW_KEY_SEMICOLON
#define EQUAL_SIGN      GLFW_KEY_EQUAL
#define A               GLFW_KEY_A
#define B               GLFW_KEY_B
#define C               GLFW_KEY_C
#define D               GLFW_KEY_D
#define E               GLFW_KEY_E
#define F               GLFW_KEY_F
#define G               GLFW_KEY_G
#define H               GLFW_KEY_H
#define I               GLFW_KEY_I
#define J               GLFW_KEY_J
#define K               GLFW_KEY_K
#define L               GLFW_KEY_L
#define M               GLFW_KEY_M
#define N               GLFW_KEY_N
#define O               GLFW_KEY_O
#define P               GLFW_KEY_P
#define Q               GLFW_KEY_Q
#define R               GLFW_KEY_R
#define S               GLFW_KEY_S
#define T               GLFW_KEY_T
#define U               GLFW_KEY_U
#define V               GLFW_KEY_V
#define W               GLFW_KEY_W
#define X               GLFW_KEY_Y
#define Y               GLFW_KEY_Y
#define Z               GLFW_KEY_Z
#define K_ESCAPE        GLFW_KEY_ESCAPE
#define K_ENTER         GLFW_KEY_ENTER
#define K_TAB           GLFW_KEY_TAB
#define K_BACKSPACE     GLFW_KEY_BACKSPACE
#define K_INSERT        GLFW_KEY_INSERT
#define K_DELETE        GLFW_KEY_DELETE
#define K_RIGHT         GLFW_KEY_RIGHT
#define K_LEFT          GLFW_KEY_LEFT
#define K_UP            GLFW_KEY_UP
#define K_DOWN          GLFW_KEY_DOWN
#define K_PAGE_UP       GLFW_KEY_PAGE_UP
#define K_PAGE_DOWN     GLFW_KEY_PAGE_DOWN
#define K_HOME          GLFW_KEY_HOME
#define K_END           GLFW_KEY_END
#define F1              GLFW_KEY_F1
#define F2              GLFW_KEY_F2
#define F3              GLFW_KEY_F3
#define F4              GLFW_KEY_F4
#define F5              GLFW_KEY_F5
#define F6              GLFW_KEY_F6
#define F7              GLFW_KEY_F7
#define F8              GLFW_KEY_F8
#define F9              GLFW_KEY_F9
#define F10             GLFW_KEY_F10
#define F11             GLFW_KEY_F11
#define F12             GLFW_KEY_F12
#define N_PAD_0         GLFW_KEY_KP_0
#define N_PAD_1         GLFW_KEY_KP_1
#define N_PAD_2         GLFW_KEY_KP_2
#define N_PAD_3         GLFW_KEY_KP_3
#define N_PAD_4         GLFW_KEY_KP_4
#define N_PAD_5         GLFW_KEY_KP_5
#define N_PAD_6         GLFW_KEY_KP_6
#define N_PAD_7         GLFW_KEY_KP_7
#define N_PAD_8         GLFW_KEY_KP_8
#define N_PAD_9         GLFW_KEY_KP_9
#define N_PAD_DECIMAL   GLFW_KEY_KP_DECIMAL
#define N_PAD_DIVIDE    GLFW_KEY_KP_DIVIDE
#define N_PAD_MULTIPLY  GLFW_KEY_KP_MULTIPLY
#define N_PAD_SUBTRACT  GLFW_KEY_KP_SUBTRACT
#define N_PAD_ADD       GLFW_KEY_KP_ADD
#define N_PAD_ENTER     GLFW_KEY_KP_ENTER
#define N_PAD_EQUAL     GLFW_KEY_KP_EQUAL
#define LEFT_SHIFT      GLFW_KEY_LEFT_SHIFT
#define RIGHT_SHIFT     GLFW_KEY_RIGHT_SHIFT
#define LEFT_CTRL       GLFW_KEY_LEFT_CONTROL
#define RIGHT_CTRL      GLFW_KEY_RIGHT_CONTROL
#define LEFT_ALT        GLFW_KEY_LEFT_ALT
#define RIGHT_ALT       GLFW_KEY_RIGHT_ALT
#define LEFT_SUPER      GLFW_KEY_LEFT_SUPER
#define RIGHT_SUPER     GLFW_KEY_RIGHT_SUPER
#define MENU            GLFW_KEY_MENU
#define LEFT_BRACKET    GLFW_KEY_LEFT_BRACKET        // [
#define RIGHT_BRACKET   GLFW_KEY_RIGHT_BRACKET       // ]
#define BACKSLASH       GLFW_KEY_BACKSLASH
#define GRAVE_ACCENT    GLFW_KEY_GRAVE_ACCENT        // `


#define M_ONE           GLFW_MOUSE_BUTTON_1
#define M_TWO           GLFW_MOUSE_BUTTON_2
#define M_THREE         GLFW_MOUSE_BUTTON_3
#define M_FOUR          GLFW_MOUSE_BUTTON_4
#define M_FIVE          GLFW_MOUSE_BUTTON_5
#define M_SIX           GLFW_MOUSE_BUTTON_6
#define M_SEVEN         GLFW_MOUSE_BUTTON_7
#define M_EIGHT         GLFW_MOUSE_BUTTON_8
#define M_LEFT          GLFW_MOUSE_BUTTON_1
#define M_RIGHT         GLFW_MOUSE_BUTTON_2
#define M_MIDDLE        GLFW_MOUSE_BUTTON_3

#ifdef __cplusplus
extern "C"
{
#endif

    CENGINE_API void CENGINE_CALL init_input(WINDOW* p_window);
    CENGINE_API bool CENGINE_CALL key_down(int key);
    CENGINE_API bool CENGINE_CALL key_pressed(int key);
    CENGINE_API bool CENGINE_CALL key_up(int key);
    CENGINE_API bool CENGINE_CALL mouse_btn_down(int btn);
    CENGINE_API bool CENGINE_CALL mouse_btn_pressed(int btn);
    CENGINE_API bool CENGINE_CALL mouse_btn_up(int btn);

#ifdef __cplusplus
}
#endif

#endif // INPUT_H
