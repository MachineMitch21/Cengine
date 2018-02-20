
#include <stdio.h>
#include <memory.h>

#include <GL/glew.h>
#include <preprocessor.h>
#include <math/matrix.h>
#include <math/vector_math.h>

#define MAX_SHADERS 2

typedef struct {
    GLuint _program;
    GLuint _handles[MAX_SHADERS];
} SHADER;

#ifdef __cplusplus
extern "C"
{
#endif

    CENGINE_API SHADER* CENGINE_CALL new_shader_f(STRING* vs_path, STRING* fs_path);
    CENGINE_API SHADER* CENGINE_CALL new_shader();
    CENGINE_API void    CENGINE_CALL free_shader(SHADER* shader);
    CENGINE_API GLuint  CENGINE_CALL shader_submit_file(STRING* file_path, GLenum type);
    CENGINE_API void    CENGINE_CALL shader_set_matrix4f(SHADER* shader, STRING* name, const Matrix_4f* m);
    CENGINE_API void    CENGINE_CALL shader_set_vec2f(SHADER* shader, STRING* name, const vec2_f* v);
    CENGINE_API void    CENGINE_CALL shader_set_vec3f(SHADER* shader, STRING* name, const vec3_f* v);
    CENGINE_API void    CENGINE_CALL shader_set_vec4f(SHADER* shader, STRING* name, const vec4_f* v);
    CENGINE_API void    CENGINE_CALL shader_set_float(SHADER* shader, STRING* name, float val);
    CENGINE_API void    CENGINE_CALL shader_set_bool(SHADER* shader, STRING* name, bool val);
    CENGINE_API void    CENGINE_CALL shader_set_int(SHADER* shader, STRING* name, int val);
    CENGINE_API void    CENGINE_CALL shader_set_uint(SHADER* shader, STRING* name, unsigned int val);

#ifdef __cplusplus
}
#endif
