
#ifndef VECTOR_MATH_H
#define VECTOR_MATH_H

#include <preprocessor.h>
#include <math.h>
#include <string_utils.h>

typedef struct vec2_f {
    float x, y;
} vec2_f;

typedef struct vec3_f {
    float x, y, z;
} vec3_f;

typedef struct vec4_f {
    float x, y, z, w;
} vec4_f;





#ifdef __cplusplus
extern "C"
{
#endif

    // vec2_f functions
    CENGINE_API vec2_f      CENGINE_CALL vec2f(float x, float y);
    CENGINE_API float       CENGINE_CALL vec2_magnitude_f(const vec2_f* v);
    CENGINE_API float       CENGINE_CALL vec2_dot_f(const vec2_f* v1, const vec2_f* v2);
    CENGINE_API vec2_f      CENGINE_CALL vec2_add_f(const vec2_f* v1, const vec2_f* v2);
    CENGINE_API vec2_f      CENGINE_CALL vec2_subtract_f(const vec2_f* v1, const vec2_f* v2);
    CENGINE_API STRING*     CENGINE_CALL vec2_toString_f(const vec2_f* v);

    // vec3_f functions
    CENGINE_API vec3_f      CENGINE_CALL vec3f(float x, float y, float z);
    CENGINE_API float       CENGINE_CALL vec3_magnitude_f(const vec3_f* v);
    CENGINE_API float       CENGINE_CALL vec3_dot_f(const vec3_f* v1, const vec3_f* v2);
    CENGINE_API vec3_f      CENGINE_CALL vec3_cross_f(const vec3_f* v1, const vec3_f* v2);
    CENGINE_API vec3_f      CENGINE_CALL vec3_add_f(const vec3_f* v1, const vec3_f* v2);
    CENGINE_API vec3_f      CENGINE_CALL vec3_subtract_f(const vec3_f* v1, const vec3_f* v2);
    CENGINE_API STRING*     CENGINE_CALL vec3_toString_f(const vec3_f* v);

    // vec4_f functions
    CENGINE_API vec4_f      CENGINE_CALL vec4f(float x, float y, float z, float w);
    CENGINE_API float       CENGINE_CALL vec4_magnitude_f(const vec4_f* v);
    CENGINE_API float       CENGINE_CALL vec4_dot_f(const vec4_f* v1, const vec4_f* v2);
    CENGINE_API vec4_f      CENGINE_CALL vec4_add_f(const vec4_f* v1, const vec4_f* v2);
    CENGINE_API vec4_f      CENGINE_CALL vec4_subtract_f(const vec4_f* v1, const vec4_f* v2);
    CENGINE_API STRING*     CENGINE_CALL vec4_toString_f(const vec4_f* v);

#ifdef __cplusplus
}
#endif

#endif // VECTOR_MATH_H
