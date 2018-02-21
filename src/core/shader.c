
#include <core/shader.h>
#include <string.h>
#include <memory.h>

struct Shader_s {
    GLuint  _program;
    GLuint  _handles[MAX_SHADERS];
    char*   _srcs[MAX_SHADERS];
};

CENGINE_API SHADER* CENGINE_CALL new_shader_f(const char* vs_path, const char* fs_path)
{
    SHADER* shader = new_shader();

    if (MAX_SHADERS >= 2)
    {
        shader->_srcs[VERTEX_SHADER] = shader_load_vs(shader, vs_path);
        shader->_srcs[FRAGMENT_SHADER] = shader_load_fs(shader, fs_path);
        int* comp_result = shader_compile(shader);
        return shader;
    }
    else
    {
        free(shader);
    }

    return NULL;
}

CENGINE_API SHADER* CENGINE_CALL new_shader()
{
    SHADER* shader = (SHADER*) malloc(sizeof(SHADER));

    return shader;
}

CENGINE_API void    CENGINE_CALL free_shader(SHADER* shader)
{
    glDeleteProgram(shader->_program);
    shader = NULL;
    free(shader);
}

CENGINE_API void    CENGINE_CALL shader_use_p(SHADER* shader)
{
    glUseProgram(shader->_program);
}

CENGINE_API char*   CENGINE_CALL shader_load_vs(SHADER* shader, const char* file_path)
{
    return shader_load_file(shader, file_path, GL_VERTEX_SHADER);
}

CENGINE_API char*   CENGINE_CALL shader_load_fs(SHADER* shader, const char* file_path)
{
    return shader_load_file(shader, file_path, GL_FRAGMENT_SHADER);
}

CENGINE_API char*   CENGINE_CALL shader_load_file(SHADER* shader, const char* file_path, GLenum type)
{
    FILE*   file_p;
    char*   buffer = NULL;
    size_t  size;

    file_p = fopen(file_path, "rb");

    if (file_p != NULL)
    {
        fseek(file_p, 0, SEEK_END);
        size = ftell(file_p);
        fseek(file_p, 0, SEEK_SET);

        buffer = (char*) malloc(sizeof(char) * (size));


        fread(buffer, 1, size, file_p);

        // Make sure that we don't have any trailing garbage in the buffer
        // because apparently we were getting some for some reason
        memset(&buffer[size], '\0', 1);
    }
    else
    {
        fprintf(stderr, "Error opening %s for reading", file_path);
    }

    fclose(file_p);
    return buffer;
}

CENGINE_API int*    CENGINE_CALL shader_compile(SHADER* shader)
{
    shader->_handles[VERTEX_SHADER] = glCreateShader(GL_VERTEX_SHADER);
    shader->_handles[FRAGMENT_SHADER] = glCreateShader(GL_FRAGMENT_SHADER);

    bool results[MAX_SHADERS];
    int infoLogLength = 0;
    GLint result = GL_FALSE;

    bool shouldLinkProgram = true;

    int i;
    for (i = 0; i < MAX_SHADERS; i++)
    {
        results[i] = true;
        char const* src = shader->_srcs[i];
        glShaderSource(shader->_handles[i], 1, &src, NULL);
        glCompileShader(shader->_handles[i]);

        glGetShaderiv(shader->_handles[i], GL_COMPILE_STATUS, &result);
        glGetShaderiv(shader->_handles[i], GL_INFO_LOG_LENGTH, &infoLogLength);

        if (infoLogLength > 0)
        {
            results[i] = false;
            shouldLinkProgram = false;
            char* error_buffer = (char*) malloc(sizeof(char) * infoLogLength);
            glGetShaderInfoLog(shader->_handles[i], infoLogLength, NULL, error_buffer);
            printf("%s\n", error_buffer);
            free(error_buffer);
        }
    }

    if (shouldLinkProgram == true)
    {
        shader->_program = glCreateProgram();

        for (i = 0; i < MAX_SHADERS; i++)
        {
            glAttachShader(shader->_program, shader->_handles[i]);
        }
        
        glLinkProgram(shader->_program);

        for (i = 0; i < MAX_SHADERS; i++)
        {
            glDetachShader(shader->_program, shader->_handles[i]);
            glDeleteShader(shader->_handles[i]);
            free(shader->_srcs[i]);
        }

        glGetProgramiv(shader->_program, GL_LINK_STATUS, &result);
        glGetProgramiv(shader->_program, GL_INFO_LOG_LENGTH, &infoLogLength);

        if (infoLogLength > 0)
        {
            char* error_buffer = (char*) malloc(sizeof(char) * infoLogLength);
            glGetProgramInfoLog(shader->_program, infoLogLength, NULL, error_buffer);
            printf("%s\n", error_buffer);
            free(error_buffer);
        }
    }

    return results;
}

CENGINE_API void    CENGINE_CALL shader_set_matrix4f(SHADER* shader, const char* name, const Matrix_4f* m)
{

}

CENGINE_API void    CENGINE_CALL shader_set_vec2f(SHADER* shader, const char* name, const vec2_f* v)
{

}

CENGINE_API void    CENGINE_CALL shader_set_vec3f(SHADER* shader, const char* name, const vec3_f* v)
{

}

CENGINE_API void    CENGINE_CALL shader_set_vec4f(SHADER* shader, const char* name, const vec4_f* v)
{

}

CENGINE_API void    CENGINE_CALL shader_set_float(SHADER* shader, const char* name, float val)
{

}

CENGINE_API void    CENGINE_CALL shader_set_bool(SHADER* shader, const char* name, bool val)
{

}

CENGINE_API void    CENGINE_CALL shader_set_int(SHADER* shader, const char* name, int val)
{

}

CENGINE_API void    CENGINE_CALL shader_set_uint(SHADER* shader, const char* name, unsigned int val)
{

}
