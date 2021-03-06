
#include <math/vector_math.h>

// --------------------------------------------------------------------

vec2_f      CENGINE_CALL vec2f(float x, float y)
{
    vec2_f temp;

    temp.x = x;
    temp.y = y;

    return temp;
}

float       CENGINE_CALL vec2_magnitude_f(const vec2_f* v)
{
    return sqrt((v->x * v->x) + (v->y * v->y));
}

float       CENGINE_CALL vec2_dot_f(const vec2_f* v1, const vec2_f* v2)
{
    return (v1->x * v2->x) + (v1->y * v2->y);
}

vec2_f      CENGINE_CALL vec2_add_f(const vec2_f* v1, const vec2_f* v2)
{
    vec2_f temp;

    temp.x = v1->x + v2->x;
    temp.y = v1->y + v2->y;

    return temp;
}

vec2_f      CENGINE_CALL vec2_subtract_f(const vec2_f* v1, const vec2_f* v2)
{
    vec2_f temp;

    temp.x = v1->x - v2->x;
    temp.y = v1->y - v2->y;

    return temp;
}

STRING* CENGINE_CALL vec2_toString_f(const vec2_f* v)
{
    char* temp = (char*) malloc(sizeof(char) * 32);

    STRING* x = ftoa(v->x, temp, 2);
    temp = NULL;
    STRING* y = ftoa(v->y, temp, 2);
    temp = NULL;

    STRING* vec2_string = new_string("VEC2 { ");
    string_append(vec2_string, x);
    string_append(vec2_string, ", ");
    string_append(vec2_string, y);
    string_append(vec2_string, "} ");

    free_string(x);
    free_string(y);
    free(temp);
    return vec2_string;
}

// -------------------------------------------------------------------

vec3_f      CENGINE_CALL vec3f(float x, float y, float z)
{
    vec3_f temp;

    temp.x = x;
    temp.y = y;
    temp.z = z;

    return temp;
}

float       CENGINE_CALL vec3_magnitude_f(const vec3_f* v)
{
    return sqrt((v->x * v->x) + (v->y * v->y) + (v->z * v->z));
}

vec3_f      CENGINE_CALL vec3_normalize_f(const vec3_f* v)
{
    vec3_f newV = *v;
    float n = vec3_magnitude_f(&newV);

    n = sqrt(n);
    n = 1.0f / n;

    newV.x *= n;
    newV.y *= n;
    newV.z *= n;

    return newV;
}

float       CENGINE_CALL vec3_dot_f(const vec3_f* v1, const vec3_f* v2)
{
    return (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
}

vec3_f      CENGINE_CALL vec3_cross_f(const vec3_f* v1, const vec3_f* v2)
{
    return vec3f(   (v1->y * v2->z) - (v1->z * v2->y),
                    (v1->z * v2->x) - (v1->x * v2->z),
                    (v1->x * v2->y) - (v1->y * v2->x)   );
}

vec3_f      CENGINE_CALL vec3_add_f(const vec3_f* v1, const vec3_f* v2)
{
    return vec3f((v1->x + v2->x), (v1->y + v2->y), (v1->z + v2->z));
}

vec3_f      CENGINE_CALL vec3_subtract_f(const vec3_f* v1, const vec3_f* v2)
{
    return vec3f((v1->x - v2->x), (v1->y - v2->y), (v1->z - v2->z));
}

STRING* CENGINE_CALL vec3_toString_f(const vec3_f* v)
{

}

// --------------------------------------------------------------------

vec4_f      CENGINE_CALL vec4f(float x, float y, float z, float w)
{
    vec4_f temp;

    temp.x = x;
    temp.y = y;
    temp.z = z;
    temp.w = w;

    return temp;
}

float       CENGINE_CALL vec4_magnitude_f(const vec4_f* v)
{

}

float       CENGINE_CALL vec4_dot_f(const vec4_f* v1, const vec4_f* v2)
{

}

vec4_f      CENGINE_CALL vec4_add_f(const vec4_f* v1, const vec4_f* v2)
{

}

vec4_f      CENGINE_CALL vec4_subtract_f(const vec4_f* v1, const vec4_f* v2)
{

}

STRING* CENGINE_CALL vec4_toString_f(const vec4_f* v)
{

}

// --------------------------------------------------------------------
