
#include <core/shader.h>

CENGINE_API SHADER* CENGINE_CALL new_shader_f(STRING* vs_path, STRING* fs_path)
{
    SHADER* shader = new_shader();

    if (MAX_SHADERS >= 2)
    {
        shader->_handles[0] = shader_submit_file(vs_path, GL_VERTEX_SHADER);
        shader->_handles[1] = shader_submit_file(fs_path, GL_FRAGMENT_SHADER);
        return shader;
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
    int i;
    for (i = 0; i < MAX_SHADERS; i++)
    {
        glDetachShader(shader->_program, shader->_handles[i]);
        glDeleteShader(shader->_handles[i]);
    }
    glDeleteProgram(shader->_program);
    shader = NULL;
    free(shader);
}

CENGINE_API GLuint  CENGINE_CALL shader_submit_file(STRING* file_path, GLenum type)
{

}

CENGINE_API void    CENGINE_CALL shader_set_matrix4f(SHADER* shader, STRING* name, const Matrix_4f* m)
{

}

CENGINE_API void    CENGINE_CALL shader_set_vec2f(SHADER* shader, STRING* name, const vec2_f* v)
{

}

CENGINE_API void    CENGINE_CALL shader_set_vec3f(SHADER* shader, STRING* name, const vec3_f* v)
{

}

CENGINE_API void    CENGINE_CALL shader_set_vec4f(SHADER* shader, STRING* name, const vec4_f* v)
{

}

CENGINE_API void    CENGINE_CALL shader_set_float(SHADER* shader, STRING* name, float val)
{

}

CENGINE_API void    CENGINE_CALL shader_set_bool(SHADER* shader, STRING* name, bool val)
{

}

CENGINE_API void    CENGINE_CALL shader_set_int(SHADER* shader, STRING* name, int val)
{

}

CENGINE_API void    CENGINE_CALL shader_set_uint(SHADER* shader, STRING* name, unsigned int val)
{

}
