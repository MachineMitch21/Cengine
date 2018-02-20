
#include <math/matrix.h>

struct Matrix_4f {
    float _elements[4][4];
};

Matrix_4f CENGINE_CALL matrix4f_diagonal(float d)
{
    Matrix_4f matrix;

    matrix._elements[0][0] = d;
    matrix._elements[0][1] = 0.0f;
    matrix._elements[0][2] = 0.0f;
    matrix._elements[0][3] = 0.0f;

    matrix._elements[1][0] = 0.0f;
    matrix._elements[1][1] = d;
    matrix._elements[1][2] = 0.0f;
    matrix._elements[1][3] = 0.0f;

    matrix._elements[2][0] = 0.0f;
    matrix._elements[2][1] = 0.0f;
    matrix._elements[2][2] = d;
    matrix._elements[2][3] = 0.0f;

    matrix._elements[3][0] = 0.0f;
    matrix._elements[3][1] = 0.0f;
    matrix._elements[3][2] = 0.0f;
    matrix._elements[3][3] = d;

    return matrix;
}

Matrix_4f CENGINE_CALL matrix4f_4v(vec4_f row1, vec4_f row2, vec4_f row3, vec4_f row4)
{
    Matrix_4f matrix;

    matrix._elements[0][0] = row1.x;
    matrix._elements[0][1] = row1.y;
    matrix._elements[0][2] = row1.z;
    matrix._elements[0][3] = row1.w;

    matrix._elements[1][0] = row2.x;
    matrix._elements[1][1] = row2.y;
    matrix._elements[1][2] = row2.z;
    matrix._elements[1][3] = row2.w;

    matrix._elements[2][0] = row3.x;
    matrix._elements[2][1] = row3.y;
    matrix._elements[2][2] = row3.z;
    matrix._elements[2][3] = row3.w;

    matrix._elements[3][0] = row4.x;
    matrix._elements[3][1] = row4.y;
    matrix._elements[3][2] = row4.z;
    matrix._elements[3][3] = row4.w;

    return matrix;
}

Matrix_4f CENGINE_CALL matrix4f_elements(float matVars[16])
{
    Matrix_4f matrix;

    matrix._elements[0][0] = matVars[0];
    matrix._elements[0][1] = matVars[1];
    matrix._elements[0][2] = matVars[2];
    matrix._elements[0][3] = matVars[3];

    matrix._elements[1][0] = matVars[4];
    matrix._elements[1][1] = matVars[5];
    matrix._elements[1][2] = matVars[6];
    matrix._elements[1][3] = matVars[7];

    matrix._elements[2][0] = matVars[8];
    matrix._elements[2][1] = matVars[9];
    matrix._elements[2][2] = matVars[10];
    matrix._elements[2][3] = matVars[11];

    matrix._elements[3][0] = matVars[12];
    matrix._elements[3][1] = matVars[13];
    matrix._elements[3][2] = matVars[14];
    matrix._elements[3][3] = matVars[15];

    return matrix;
}

Matrix_4f CENGINE_CALL matrix4f_all(    float Xx, float Xy, float Xz, float Xo,
                                        float Yx, float Yy, float Yz, float Yo,
                                        float Zx, float Zy, float Zz, float Zo,
                                        float Tx, float Ty, float Tz, float To  )
{
    vec4_f row1 = vec4f(Xx, Xy, Xz, Xo);
    vec4_f row2 = vec4f(Yx, Yy, Yy, Yo);
    vec4_f row3 = vec4f(Xx, Yz, Zz, Zo);
    vec4_f row4 = vec4f(Tx, Ty, Tz, To);

    return matrix4f_4v(row1, row2, row3, row4);
}

Matrix_4f   CENGINE_CALL matrix4f_perspective(float fov, float aspect_ratio, float near_clip, float far_clip)
{
        Matrix_4f matrix = matrix4f_diagonal(1.0f);

        float t     = tan(to_radians(fov / 2));
        float f_n   = far_clip - near_clip;

        matrix._elements[0][0] = 1.0f / (aspect_ratio * t);
        matrix._elements[1][1] = 1.0f / t;
        matrix._elements[2][2] = -(far_clip + near_clip) / f_n;
        matrix._elements[3][2] = -1.0f;
        matrix._elements[2][3] = (-2.0f * far_clip * near_clip) / f_n;
        matrix._elements[3][3] = 0.0f;

        return matrix;
}

Matrix_4f   CENGINE_CALL matrix4f_orthographic(float left, float right, float bottom, float top, float near, float far)
{
    Matrix_4f matrix = matrix4f_diagonal(1.0f);

    matrix._elements[0][0] = 2 / (right - left);
    matrix._elements[1][1] = 2 / (top - bottom);
    matrix._elements[2][2] = -2 / (far - near);
    matrix._elements[0][3] = -(right + left) / (right - left);
    matrix._elements[1][3] = -(top + bottom) / (top - bottom);
    matrix._elements[2][3] = -(far + near) / (far - near);

    return matrix;
}

Matrix_4f   CENGINE_CALL matrix4f_look_at(const vec3_f* eye, const vec3_f* target, const vec3_f* up)
{
    vec3_f zDir     = vec3_subtract_f(eye, target);
    vec3_f zAxis    = vec3_normalize_f(&zDir);
    vec3_f upCrossZ = vec3_cross_f(up, &zAxis);
    vec3_f xAxis    = vec3_normalize_f(&upCrossZ);
    vec3_f zCrossX  = vec3_cross_f(&zAxis, &xAxis);
    vec3_f yAxis    = vec3_normalize_f(&zCrossX);

    float t1    = vec3_dot_f(&xAxis, eye);
    float t2    = vec3_dot_f(&yAxis, eye);
    float t3    = vec3_dot_f(&zAxis, eye);

    return matrix4f_4v( vec4f(xAxis.x, yAxis.x, zAxis.x, 0.0f),
                        vec4f(xAxis.y, yAxis.y, zAxis.y, 0.0f),
                        vec4f(xAxis.z, yAxis.z, zAxis.z, 0.0f),
                        vec4f(-t1,     -t2,     -t3,     1.0f)  );
}

Matrix_4f*  CENGINE_CALL matrix4f_translate(Matrix_4f* m, const vec3_f* v)
{
    vec4_f translation   = vec4f(v->x, v->y, v->z, 1.0f);
    vec4_f product       = matrix4f_multiply_vec4f(m, &translation);

    m->_elements[3][0] = product.x;
    m->_elements[3][1] = product.y;
    m->_elements[3][2] = product.z;
    m->_elements[3][3] = product.w;

    return m;
}

Matrix_4f   CENGINE_CALL matrix4f_rotate(Matrix_4f* m, const vec3_f* v, float angle)
{
    float x = v->x;
    float y = v->y;
    float z = v->z;

    float c = cos(angle);
    float s = sin(angle);
    float t = 1.0f - c;

    float tx    = t * x;
    float ty    = t * y;
    float tz    = t * z;
    float txy   = tx * y;
    float txz   = tx * z;
    float tyz   = ty * z;
    float sx    = s * x;
    float sy    = s * y;
    float sz    = s * z;

    m->_elements[0][0] = c + tx * x;
    m->_elements[0][1] = txy + sz;
    m->_elements[0][2] = txz - sy;

    m->_elements[1][0] = txy - sz;
    m->_elements[1][1] = c + ty * y;
    m->_elements[1][2] = tyz + sx;

    m->_elements[2][0] = txz + sy;
    m->_elements[2][1] = tyz - sx;
    m->_elements[2][2] = c + tz * z;

    m->_elements[3][3] = 1.0f;

    return *m;
}

Matrix_4f   CENGINE_CALL matrix4f_scale(Matrix_4f* m, const vec3_f* v)
{
    m->_elements[0][0] = v->x;
    m->_elements[1][0] = v->y;
    m->_elements[2][0] = v->z;

    return *m;
}

Matrix_4f*  CENGINE_CALL matrix4f_transpose(Matrix_4f* m)
{
    printf("Not implemented yet");

    return m;
}

Matrix_4f*  CENGINE_CALL matrix4f_multiply(Matrix_4f* m1, const Matrix_4f* m2)
{
    Matrix_4f temp = matrix4f_diagonal(1.0f);

    // First Row ---------------------------------------------------------------
    temp._elements[0][0] =  (   (m1->_elements[0][0] * m2->_elements[0][0]) +
                                (m1->_elements[1][0] * m2->_elements[0][1]) +
                                (m1->_elements[2][0] * m2->_elements[0][2]) +
                                (m1->_elements[3][0] * m2->_elements[0][3]) );

    temp._elements[0][1] =  (   (m1->_elements[0][1] * m2->_elements[0][0]) +
                                (m1->_elements[1][1] * m2->_elements[0][1]) +
                                (m1->_elements[2][1] * m2->_elements[0][2]) +
                                (m1->_elements[3][1] * m2->_elements[0][3]) );

    temp._elements[0][2] =  (   (m1->_elements[0][2] * m2->_elements[0][0]) +
                                (m1->_elements[1][2] * m2->_elements[0][1]) +
                                (m1->_elements[2][2] * m2->_elements[0][2]) +
                                (m1->_elements[3][2] * m2->_elements[0][3]) );

    temp._elements[0][3] =  (   (m1->_elements[0][3] * m2->_elements[0][0]) +
                                (m1->_elements[1][3] * m2->_elements[0][1]) +
                                (m1->_elements[2][3] * m2->_elements[0][2]) +
                                (m1->_elements[3][3] * m2->_elements[0][3]) );

    // Second Row ---------------------------------------------------------------
    temp._elements[1][0] =  (   (m1->_elements[0][0] * m2->_elements[1][0]) +
                                (m1->_elements[1][0] * m2->_elements[1][1]) +
                                (m1->_elements[2][0] * m2->_elements[1][2]) +
                                (m1->_elements[3][0] * m2->_elements[1][3]) );

    temp._elements[1][1] =  (   (m1->_elements[0][1] * m2->_elements[1][0]) +
                                (m1->_elements[1][1] * m2->_elements[1][1]) +
                                (m1->_elements[2][1] * m2->_elements[1][2]) +
                                (m1->_elements[3][1] * m2->_elements[1][3]) );

    temp._elements[1][2] =  (   (m1->_elements[0][2] * m2->_elements[1][0]) +
                                (m1->_elements[1][2] * m2->_elements[1][1]) +
                                (m1->_elements[2][2] * m2->_elements[1][2]) +
                                (m1->_elements[3][2] * m2->_elements[1][3]) );

    temp._elements[1][3] =  (   (m1->_elements[0][3] * m2->_elements[1][0]) +
                                (m1->_elements[1][3] * m2->_elements[1][1]) +
                                (m1->_elements[2][3] * m2->_elements[1][2]) +
                                (m1->_elements[3][3] * m2->_elements[1][3]) );
    // Third Row ---------------------------------------------------------------
    temp._elements[2][0] =  (   (m1->_elements[0][0] * m2->_elements[2][0]) +
                                (m1->_elements[1][0] * m2->_elements[2][1]) +
                                (m1->_elements[2][0] * m2->_elements[2][2]) +
                                (m1->_elements[3][0] * m2->_elements[2][3]) );

    temp._elements[2][1] =  (   (m1->_elements[0][1] * m2->_elements[2][0]) +
                                (m1->_elements[1][1] * m2->_elements[2][1]) +
                                (m1->_elements[2][1] * m2->_elements[2][2]) +
                                (m1->_elements[3][1] * m2->_elements[2][3]) );

    temp._elements[2][2] =  (   (m1->_elements[0][2] * m2->_elements[2][0]) +
                                (m1->_elements[1][2] * m2->_elements[2][1]) +
                                (m1->_elements[2][2] * m2->_elements[2][2]) +
                                (m1->_elements[3][2] * m2->_elements[2][3]) );

    temp._elements[2][3] =  (   (m1->_elements[0][3] * m2->_elements[2][0]) +
                                (m1->_elements[1][3] * m2->_elements[2][1]) +
                                (m1->_elements[2][3] * m2->_elements[2][2]) +
                                (m1->_elements[3][3] * m2->_elements[2][3]) );

    // Fourth Row ---------------------------------------------------------------
    temp._elements[3][0] =  (   (m1->_elements[0][0] * m2->_elements[3][0]) +
                                (m1->_elements[1][0] * m2->_elements[3][1]) +
                                (m1->_elements[2][0] * m2->_elements[3][2]) +
                                (m1->_elements[3][0] * m2->_elements[3][3]) );

    temp._elements[3][1] =  (   (m1->_elements[0][1] * m2->_elements[3][0]) +
                                (m1->_elements[1][1] * m2->_elements[3][1]) +
                                (m1->_elements[2][1] * m2->_elements[3][2]) +
                                (m1->_elements[3][1] * m2->_elements[3][3]) );

    temp._elements[3][2] =  (   (m1->_elements[0][2] * m2->_elements[3][0]) +
                                (m1->_elements[1][2] * m2->_elements[3][1]) +
                                (m1->_elements[2][2] * m2->_elements[3][2]) +
                                (m1->_elements[3][2] * m2->_elements[3][3]) );

    temp._elements[3][3] =  (   (m1->_elements[0][3] * m2->_elements[3][0]) +
                                (m1->_elements[1][3] * m2->_elements[3][1]) +
                                (m1->_elements[2][3] * m2->_elements[3][2]) +
                                (m1->_elements[3][3] * m2->_elements[3][3]) );

    *m1 = temp;
    return m1;
}

vec4_f      CENGINE_CALL matrix4f_multiply_vec4f(Matrix_4f* m, const vec4_f* v)
{
    vec4_f temp;

    temp.x = m->_elements[0][1] * v->x + m->_elements[1][1] * v->y + m->_elements[2][2] * v->z + m->_elements[3][3] * v->w;
    temp.y = m->_elements[0][1] * v->x + m->_elements[1][1] * v->y + m->_elements[2][2] * v->z + m->_elements[3][3] * v->w;
    temp.z = m->_elements[0][1] * v->x + m->_elements[1][1] * v->y + m->_elements[2][2] * v->z + m->_elements[3][3] * v->w;
    temp.w = m->_elements[0][1] * v->x + m->_elements[1][1] * v->y + m->_elements[2][2] * v->z + m->_elements[3][3] * v->w;

    return temp;
}

float*      CENGINE_CALL matrix4f_value(const Matrix_4f* matrix)
{
    float elements[16];

    // First Column
    elements[0]     = matrix->_elements[0][0];
    elements[1]     = matrix->_elements[1][0];
    elements[2]     = matrix->_elements[2][0];
    elements[3]     = matrix->_elements[3][0];

    // Second Column
    elements[4]     = matrix->_elements[0][1];
    elements[5]     = matrix->_elements[1][1];
    elements[6]     = matrix->_elements[2][1];
    elements[7]     = matrix->_elements[3][1];

    // Third Column
    elements[8]     = matrix->_elements[0][2];
    elements[9]     = matrix->_elements[1][2];
    elements[10]    = matrix->_elements[2][2];
    elements[11]    = matrix->_elements[3][2];

    // Fourth Column
    elements[12]    = matrix->_elements[0][3];
    elements[13]    = matrix->_elements[1][3];
    elements[14]    = matrix->_elements[2][3];
    elements[15]    = matrix->_elements[3][3];

    return elements;
}
