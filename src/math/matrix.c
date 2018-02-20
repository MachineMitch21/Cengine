
#include <math/matrix.h>

struct Matrix_4f {
    float _elements[4][4];
};

Matrix_4f CENGINE_CALL matrix4f_diagonal(float d)
{
    Matrix_4f matrix;

    matrix->_elements[0][0] = d;
    matrix->_elements[0][1] = 0.0f;
    matrix->_elements[0][2] = 0.0f;
    matrix->_elements[0][3] = 0.0f;

    matrix->_elements[1][0] = 0.0f;
    matrix->_elements[1][1] = d;
    matrix->_elements[1][2] = 0.0f;
    matrix->_elements[1][3] = 0.0f;

    matrix->_elements[2][0] = 0.0f;
    matrix->_elements[2][1] = 0.0f;
    matrix->_elements[2][2] = d;
    matrix->_elements[2][3] = 0.0f;

    matrix->_elements[3][0] = 0.0f;
    matrix->_elements[3][1] = 0.0f;
    matrix->_elements[3][2] = 0.0f;
    matrix->_elements[3][3] = d;

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

    matrix->_elements[0][0] = matVars[0];
    matrix->_elements[0][1] = matVars[1];
    matrix->_elements[0][2] = matVars[2];
    matrix->_elements[0][3] = matVars[3];

    matrix->_elements[1][0] = matVars[4];
    matrix->_elements[1][1] = matVars[5];
    matrix->_elements[1][2] = matVars[6];
    matrix->_elements[1][3] = matVars[7];

    matrix->_elements[2][0] = matVars[8];
    matrix->_elements[2][1] = matVars[9];
    matrix->_elements[2][2] = matVars[10];
    matrix->_elements[2][3] = matVars[11];

    matrix->_elements[3][0] = matVars[12];
    matrix->_elements[3][1] = matVars[13];
    matrix->_elements[3][2] = matVars[14];
    matrix->_elements[3][3] = matVars[15];

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
    Matrix_4f matrix;

    return matrix;
}

Matrix_4f   CENGINE_CALL matrix4f_translate(Matrix_4f* m, const vec3_f* v)
{
    Matrix_4f matrix;

    return matrix;
}

Matrix_4f   CENGINE_CALL matrix4f_rotate(Matrix_4f* m, const vec3_f* v, float angle)
{
    Matrix_4f matrix;

    return matrix;
}

Matrix_4f   CENGINE_CALL matrix4f_scale(Matrix_4f* m, const vec3_f* v)
{
    Matrix_4f matrix;

    return matrix;
}

Matrix_4f*  CENGINE_CALL matrix4f_transpose(Matrix_4f* m)
{
    Matrix_4f* matrix;

    return matrix;
}

Matrix_4f*  CENGINE_CALL matrix4f_multiply(Matrix_4f* m1, const Matrix_4f* m2)
{
    Matrix_4f* matrix;

    return matrix;
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
}
