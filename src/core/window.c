
#include <core/window.h>

struct Window_s {
    GLFWwindow*     _context;
    STRING*         _title;
    int             _height;
    int             _width;
};

/* --------------------------------------------------------------------------
    Callback functions
   -------------------------------------------------------------------------- */

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    WINDOW* p_window = (WINDOW*) glfwGetWindowUserPointer(window);

    p_window->_width = width;
    p_window->_height = height;
    glViewport(0, 0, width, height);
}

// --------------------------------------------------------------------------

WINDOW* CENGINE_CALL create_window(STRING* title, int width, int height)
{
    WINDOW* p_window    = (WINDOW*) malloc(sizeof(WINDOW));
    p_window->_title    = title;
    p_window->_width    = width;
    p_window->_height   = height;

    assert(p_window != NULL);

	GLenum status;

	glfwInit();

	//specifies GLFW client API VERSION
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

	p_window->_context = glfwCreateWindow(p_window->_width, p_window->_height, string_cstr(p_window->_title), NULL, NULL);

	if (p_window->_context == NULL)
	{
		printf("Failed to create GLFW window!\n");
		glfwTerminate();
	}

	if (p_window->_context != NULL)
	{
		glfwMakeContextCurrent(p_window->_context);
	}

	glewExperimental = GL_TRUE;

	status = glewInit();

	if (status != GLEW_OK) {
		printf("Failed to initialize GLEW\n");
        glfwTerminate();
	}

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LEQUAL);

	glfwGetFramebufferSize(p_window->_context, &p_window->_width, &p_window->_height);
	glViewport(0, 0, p_window->_width, p_window->_height);

	glfwSetWindowUserPointer(p_window->_context, p_window);

    window_enable_vsync(p_window, true);

	glfwSetFramebufferSizeCallback(p_window->_context, framebuffer_size_callback);
	// glfwSetWindowIconifyCallback(_window, window_iconify_callback);
	// glfwSetErrorCallback(error_callback);

    return p_window;
}

void CENGINE_CALL window_clear(WINDOW* p_window, float r, float g, float b, float a)
{
    assert(p_window != NULL);
    glClearColor(r, g, b, a);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void CENGINE_CALL window_update(WINDOW* p_window)
{
    assert(p_window != NULL);
    glfwSwapBuffers(p_window->_context);
    glfwPollEvents();
}

bool CENGINE_CALL window_is_closed(WINDOW* p_window)
{
    assert(p_window != NULL);
    return glfwWindowShouldClose(p_window->_context);
}

void CENGINE_CALL window_enable_vsync(WINDOW* p_window, bool enable)
{
    assert(p_window != NULL);
    glfwSwapInterval(enable);
}

void CENGINE_CALL window_close(WINDOW* p_window)
{
    assert(p_window != NULL);

    glfwSetWindowShouldClose(p_window->_context, GL_TRUE);
}

GLFWwindow* CENGINE_CALL window_get_context(WINDOW* p_window)
{
    return p_window->_context;
}

void CENGINE_CALL free_window(WINDOW* p_window)
{
    free_string(p_window->_title);
    p_window = NULL;
    free(p_window);
    glfwTerminate();
}
