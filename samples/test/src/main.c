
#include <core/window.h>
#include <core/input.h>
#include <math/vector_math.h>
#include <math/matrix.h>
#include <utils/string_utils.h>
#include <memory.h>

int main(int argc, char** argv)
{
    WINDOW* p_window = create_window(new_string("CENGINE"), 800, 600);

    STRING* str = new_string("Something ");
    STRING* str1 = new_string("happened");

    string_append(str, str1);
    free_string(str1);

    STRING* substr = string_substr(str, 8, 4);

    printf("Substring is: %s\n\n", string_cstr(substr));
    free_string(substr);

    printf("String is now: %s\n\n", string_cstr(str));
    free_string(str);

    vec2_f test = vec2f(4, 6);
    vec3_f test1 = vec3f(8, 2, 24);
    vec4_f test2 = vec4f(68, 23, 92, 10);

    // STRING* test_toString = vec2_toString_f(&test);
    // printf("test: %s\n", string_cstr(test_toString));

    printf("Test vec2 magnitude is: %f\n", vec2_magnitude_f(&test));

    float test1_elems[] =
    {
        43.0f, 34.3f, 2.5f, 9.4f,
        12.0f, 34.2f, 2.1f, 5.4f,
        44.0f, 11.5f, 12.3f, 8.0f,
        1.0f, 4.3f, 2.3f, 1.2f
    };

    float test2_elems[] =
    {
        45.0f, 34.3f, 2.5f, 5.4f,
        12.0f, 4.2f, 2.1f, 5.4f,
        44.0f, 1.5f, 12.3f, 8.0f,
        1.0f, 4.3f, 2.3f, 1.2f
    };

    Matrix_4f test1_mat = matrix4f_elements(test1_elems);
    Matrix_4f test2_mat = matrix4f_elements(test2_elems);

    Matrix_4f* result_mat = matrix4f_multiply(&test1_mat, &test2_mat);

    print_matrix(result_mat);

    init_input(p_window);


    const GLfloat g_vertex_buffer_data[] = {
        -1.0f, -1.0f, 0.0f,
        1.0f, -1.0f, 0.0f,
        0.0f,  1.0f, 0.0f,
    };

    STRING* vs_source = new_string("#version 330 core \nlayout(location = 0) in vec3 vertexPosition_modelspace; \nvoid main() {\n gl_Position.xyz = vertexPosition_modelspace;\n gl_Position.w = 1.0;\n }\n");

    STRING* fs_source = new_string("#version 330 core \n out vec3 color; \n void main() {\n color = vec3(1,0,0);\n}\n");

    GLuint vsID = glCreateShader(GL_VERTEX_SHADER);
    GLuint fsID = glCreateShader(GL_FRAGMENT_SHADER);

    GLint result = GL_FALSE;
    int infoLogLength = 0;
    char* error_buffer = (char*) malloc(sizeof(char) * 512);

    char const* vertex_source = string_cstr(vs_source);
    free_string(vs_source);
    glShaderSource(vsID, 1, &vertex_source, NULL);
    glCompileShader(vsID);

    glGetShaderiv(vsID, GL_COMPILE_STATUS, &result);
    glGetShaderiv(vsID, GL_INFO_LOG_LENGTH, &infoLogLength);

    if (infoLogLength > 0)
    {
        error_buffer = (char*) realloc(error_buffer, sizeof(char) * infoLogLength);
        glGetShaderInfoLog(vsID, infoLogLength, NULL, error_buffer);
        printf("%s\n", error_buffer);
        error_buffer = NULL;
    }

    char const* frag_source = string_cstr(fs_source);
    free_string(fs_source);
    glShaderSource(fsID, 1, &frag_source, NULL);
    glCompileShader(fsID);

    glGetShaderiv(fsID, GL_COMPILE_STATUS, &result);
    glGetShaderiv(fsID, GL_INFO_LOG_LENGTH, &infoLogLength);

    if (infoLogLength > 0)
    {
        error_buffer = (char*) realloc(error_buffer, sizeof(char) * infoLogLength);
        glGetShaderInfoLog(fsID, infoLogLength, NULL, error_buffer);
        printf("%s\n", error_buffer);
        error_buffer = NULL;
    }

    GLuint pID = glCreateProgram();
    glAttachShader(pID, vsID);
    glAttachShader(pID, fsID);
    glLinkProgram(pID);

    glGetProgramiv(pID, GL_LINK_STATUS, &result);
    glGetProgramiv(pID, GL_INFO_LOG_LENGTH, &infoLogLength);

    if (infoLogLength > 0)
    {
        error_buffer = (char*) realloc(error_buffer, sizeof(char) * infoLogLength);
        glGetProgramInfoLog(pID, infoLogLength, NULL, error_buffer);
        printf("%s\n", error_buffer);
    }

    free(error_buffer);

    glDetachShader(pID, vsID);
    glDetachShader(pID, fsID);

    glDeleteShader(vsID);
    glDeleteShader(fsID);

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

        glUseProgram(pID);

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
    glDeleteProgram(pID);
    free_window(p_window);
    return 0;
}
