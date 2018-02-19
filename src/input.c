
#include <input.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

bool _keysPrevious[MAX_KEYS];
bool _btnsPrevious[MAX_MOUSE_BTNS];
bool _keys[MAX_KEYS];
bool _btns[MAX_MOUSE_BTNS];

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
{
    _keys[key] = (action != GLFW_RELEASE);
}

void mouse_btn_callback(GLFWwindow* window, int btn, int action, int mods)
{
    _btns[btn] = (action != GLFW_RELEASE);
}

void cursor_movement_callback(GLFWwindow* window, double xpos, double ypos)
{

}

void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
{

}

void CENGINE_CALL init_input(WINDOW* p_window)
{
    glfwSetKeyCallback(window_get_context(p_window), key_callback);
    glfwSetMouseButtonCallback(window_get_context(p_window), mouse_btn_callback);
    glfwSetCursorPosCallback(window_get_context(p_window), cursor_movement_callback);
    glfwSetScrollCallback(window_get_context(p_window), scroll_callback);
}


bool CENGINE_CALL key_down(int key)
{
    bool keyDownThisFrame = false;

    if (_keysPrevious[key] == true)
    {
        keyDownThisFrame = false;
    }
    else if (_keysPrevious[key] == false && _keys[key] == true)
    {
        keyDownThisFrame = true;
    }
    else if (_keysPrevious[key] == false && _keys[key] == false)
    {
        keyDownThisFrame = false;
    }

    _keysPrevious[key] = _keys[key];

    return keyDownThisFrame;
}

bool CENGINE_CALL key_pressed(int key)
{
    return (glfwGetKey(glfwGetCurrentContext(), key) == GLFW_PRESS);
}

bool CENGINE_CALL key_up(int key)
{
    bool keyUpThisFrame = false;

    if (_keysPrevious[key] == false)
    {
        keyUpThisFrame = false;
    }
    else if (_keysPrevious[key] == true && _keys[key] == false)
    {
        keyUpThisFrame = true;
    }
    else if (_keysPrevious[key] == true && _keys[key] == true)
    {
        keyUpThisFrame = false;
    }

    _keysPrevious[key] = _keys[key];

    return keyUpThisFrame;
}

bool CENGINE_CALL mouse_btn_down(int btn)
{
    bool btnDownThisFrame = false;

    if (_btnsPrevious[btn] == true)
    {
        btnDownThisFrame = false;
    }
    else if (_btnsPrevious[btn] == false && _btns[btn] == true)
    {
        btnDownThisFrame = true;
    }
    else if (_btnsPrevious[btn] == false && _btns[btn] == false)
    {
        btnDownThisFrame = false;
    }

    _btnsPrevious[btn] = _btns[btn];

    return btnDownThisFrame;
}

bool CENGINE_CALL mouse_btn_pressed(int btn)
{
    return (glfwGetMouseButton(glfwGetCurrentContext(), btn) == GLFW_PRESS);
}

bool CENGINE_CALL mouse_btn_up(int btn)
{
    bool btnUpThisFrame = false;

    if (_btnsPrevious[btn] == false)
    {
        btnUpThisFrame = false;
    }
    else if (_btnsPrevious[btn] == true && _btns[btn] == false)
    {
        btnUpThisFrame = true;
    }
    else if (_btnsPrevious[btn] == true && _btns[btn] == true)
    {
        btnUpThisFrame = false;
    }

    _btnsPrevious[btn] = _btns[btn];

    return btnUpThisFrame;
}
