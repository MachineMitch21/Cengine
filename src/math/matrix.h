
#ifndef MATRIX_H
#define MATRIX_H

#include <preprocessor.h>
#include <math/vector_math.h>

typedef struct {
    float _elements[16];
} Matrix_4f;

#ifdef __cplusplus
extern "C"
{
#endif

CENGINE_API Matrix_4f CENGINE_CALL matrix4f_slr(float d);

CENGINE_API Matrix_4f CENGINE_CALL matrix4f_4v(vec4_f col1, vec4_f col2, vec4_f col3, vec4_f col4);

CENGINE_API Matrix_4f CENGINE_CALL matrix4f_arr(float matVars[16]);

CENGINE_API Matrix_4f CENGINE_CALL matrix4f_all(    float Xx, float Yx, float Zx, float Tx,
                                                    float Xy, float Yy, float Zy, float Ty,
                                                    float Xz, float Yz, float Zz, float Tz,
                                                    float Ox, float Oy, float Oz, float Os  );

CENGINE_API Matrix_4f   CENGINE_CALL perspective    (float fov, float aspect_ratio, float near_clip, float far_clip);
CENGINE_API Matrix_4f   CENGINE_CALL orthographic   (float left, float right, float bottom, float top, float near, float far);
CENGINE_API Matrix_4f   CENGINE_CALL look_at        (const vec3_f* eye, const vec3_f* target, const vec3_f* up);

CENGINE_API Matrix_4f   CENGINE_CALL tranlate   (Matrix_4f* m, const vec3_f* v);
CENGINE_API Matrix_4f   CENGINE_CALL rotate     (Matrix_4f* m, const vec3_f* v, float angle);
CENGINE_API Matrix_4f   CENGINE_CALL scale      (Matrix_4f* m, const vec3_f* v);
CENGINE_API Matrix_4f*  CENGINE_CALL transpose  (Matrix_4f* m);
CENGINE_API Matrix_4f*  CENGINE_CALL multiply   (Matrix_4f* m1, const Matrix_4f* m2);

#ifdef __cplusplus
}
#endif

#endif // MATRIX_H
