
#include <stdio.h>
#include <memory.h>

#include <GL/glew.h>
#include <preprocessor.h>
#include <math/matrix.h>
#include <math/vector_math.h>
#include <utils/string_utils.h>

#define MAX_SHADERS 2

#define VERTEX_SHADER 0
#define FRAGMENT_SHADER 1

typedef struct Shader_s SHADER;

#ifdef __cplusplus
extern "C"
{
#endif

    CENGINE_API SHADER* CENGINE_CALL new_shader_f(const char* vs_path, const char* fs_path);
    CENGINE_API SHADER* CENGINE_CALL new_shader();
    CENGINE_API void    CENGINE_CALL free_shader(SHADER* shader);
    CENGINE_API void    CENGINE_CALL shader_use_p(SHADER* shader);
    CENGINE_API char*   CENGINE_CALL shader_load_vs(SHADER* shader, const char* file_path);
    CENGINE_API char*   CENGINE_CALL shader_load_fs(SHADER* shader, const char* file_path);
    CENGINE_API char*   CENGINE_CALL shader_load_file(SHADER* shader, const char* file_path, GLenum type);
    CENGINE_API bool*   CENGINE_CALL shader_compile(SHADER* shader);
    CENGINE_API void    CENGINE_CALL shader_set_matrix4f(SHADER* shader, const char* name, const Matrix_4f* m);
    CENGINE_API void    CENGINE_CALL shader_set_vec2f(SHADER* shader, const char* name, const vec2_f* v);
    CENGINE_API void    CENGINE_CALL shader_set_vec3f(SHADER* shader, const char* name, const vec3_f* v);
    CENGINE_API void    CENGINE_CALL shader_set_vec4f(SHADER* shader, const char* name, const vec4_f* v);
    CENGINE_API void    CENGINE_CALL shader_set_float(SHADER* shader, const char* name, float val);
    CENGINE_API void    CENGINE_CALL shader_set_bool(SHADER* shader, const char* name, bool val);
    CENGINE_API void    CENGINE_CALL shader_set_int(SHADER* shader, const char* name, int val);
    CENGINE_API void    CENGINE_CALL shader_set_uint(SHADER* shader, const char* name, unsigned int val);

#ifdef __cplusplus
}
#endif
