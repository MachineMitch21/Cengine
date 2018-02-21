
#include <core/window.h>
#include <core/input.h>
#include <math/vector_math.h>
#include <math/matrix.h>
#include <utils/string_utils.h>
#include <core/shader.h>
#include <memory.h>

int main(int argc, char** argv)
{
    WINDOW* p_window = create_window(new_string("CENGINE"), 800, 600);

    init_input(p_window);

    SHADER* shader = new_shader_f(  "F:\\Code\\Cengine\\samples\\test\\resources\\shaders\\test.vs",
                                    "F:\\Code\\Cengine\\samples\\test\\resources\\shaders\\test.fs" );

    const GLfloat g_vertex_buffer_data[] = {
        -1.0f, -1.0f, 0.0f,
        1.0f, -1.0f, 0.0f,
        0.0f,  1.0f, 0.0f,
    };

    GLuint vbo;

    glGenBuffers(1, &vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);

    GLuint vao;

    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    while (!window_is_closed(p_window))
    {
        window_clear(p_window, 0.5f, 0.5f, 0.5f, 0.5f);

        if (key_pressed(K_ESCAPE))
        {
            window_close(p_window);
        }

        shader_use_p(shader);

        glEnableVertexAttribArray(0);
        glBindBuffer(GL_ARRAY_BUFFER, vbo);
        glVertexAttribPointer(
           0,                  // attribute 0. No particular reason for 0, but must match the layout in the shader.
           3,                  // size
           GL_FLOAT,           // type
           GL_FALSE,           // normalized?
           0,                  // stride
           (void*)0            // array buffer offset
        );
        // Draw the triangle !
        glDrawArrays(GL_TRIANGLES, 0, 3); // Starting from vertex 0; 3 vertices total -> 1 triangle
        glDisableVertexAttribArray(0);

        window_update(p_window);
    }

    glDeleteBuffers(1, &vbo);
    glDeleteVertexArrays(1, &vao);
    free_shader(shader);
    free_window(p_window);
    return 0;
}
