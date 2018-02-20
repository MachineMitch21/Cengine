
#ifndef MATRIX_H
#define MATRIX_H

#include <preprocessor.h>
#include <math/vector_math.h>
#include <math/math_helpers.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    float _elements[4][4];
} Matrix_4f;

#ifdef __cplusplus
extern "C"
{
#endif

CENGINE_API Matrix_4f CENGINE_CALL matrix4f_slr(float d);

CENGINE_API Matrix_4f CENGINE_CALL matrix4f_4v(vec4_f col1, vec4_f col2, vec4_f col3, vec4_f col4);

CENGINE_API Matrix_4f CENGINE_CALL matrix4f_elements(float matVars[16]);

CENGINE_API Matrix_4f CENGINE_CALL matrix4f_all(    float Xx, float Xy, float Xz, float Xo,
                                                    float Yx, float Yy, float Yz, float Yo,
                                                    float Zx, float Zy, float Zz, float Zo,
                                                    float Tx, float Ty, float Tz, float To   );

CENGINE_API Matrix_4f   CENGINE_CALL matrix4f_perspective    (float fov, float aspect_ratio, float near_clip, float far_clip);
CENGINE_API Matrix_4f   CENGINE_CALL matrix4f_orthographic   (float left, float right, float bottom, float top, float near, float far);
CENGINE_API Matrix_4f   CENGINE_CALL matrix4f_look_at        (const vec3_f* eye, const vec3_f* target, const vec3_f* up);

CENGINE_API Matrix_4f*  CENGINE_CALL matrix4f_translate     (Matrix_4f* m, const vec3_f* v);
CENGINE_API Matrix_4f   CENGINE_CALL matrix4f_rotate        (Matrix_4f* m, const vec3_f* v, float angle);
CENGINE_API Matrix_4f   CENGINE_CALL matrix4f_scale         (Matrix_4f* m, const vec3_f* v);
CENGINE_API Matrix_4f*  CENGINE_CALL matrix4f_transpose     (Matrix_4f* m);
CENGINE_API Matrix_4f*  CENGINE_CALL matrix4f_multiply      (Matrix_4f* m1, const Matrix_4f* m2);
CENGINE_API vec4_f      CENGINE_CALL matrix4f_multiply_vec4f(Matrix_4f* m, const vec4_f* v);
CENGINE_API float*      CENGINE_CALL matrix4f_value         (const Matrix_4f* m);

CENGINE_API void        CENGINE_CALL print_matrix           (const Matrix_4f* m);

#ifdef __cplusplus
}
#endif

#endif // MATRIX_H
