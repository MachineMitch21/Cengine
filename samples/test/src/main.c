
#include <core/window.h>
#include <core/input.h>
#include <math/vector_math.h>
#include <math/matrix.h>
#include <utils/string_utils.h>

int main(int argc, char** argv)
{
    WINDOW* p_window = create_window(new_string("CENGINE"), 800, 600);

    STRING* str = new_string("Something ");
    STRING* str1 = new_string("happened");

    string_append(str, str1);
    free_string(str1);

    STRING* substr = string_substr(str, 8, 4);

    printf("Substring is: %s\n\n", string_cstr(substr));
    free_string(substr);

    printf("String is now: %s\n\n", string_cstr(str));
    free_string(str);

    vec2_f test = vec2f(4, 6);
    vec3_f test1 = vec3f(8, 2, 24);
    vec4_f test2 = vec4f(68, 23, 92, 10);

    // STRING* test_toString = vec2_toString_f(&test);
    // printf("test: %s\n", string_cstr(test_toString));

    printf("Test vec2 magnitude is: %f\n", vec2_magnitude_f(&test));

    float test1_elems[] =
    {
        43.0f, 34.3f, 2.5f, 9.4f,
        12.0f, 34.2f, 2.1f, 5.4f,
        44.0f, 11.5f, 12.3f, 8.0f,
        1.0f, 4.3f, 2.3f, 1.2f
    };

    float test2_elems[] =
    {
        45.0f, 34.3f, 2.5f, 5.4f,
        12.0f, 4.2f, 2.1f, 5.4f,
        44.0f, 1.5f, 12.3f, 8.0f,
        1.0f, 4.3f, 2.3f, 1.2f
    };

    Matrix_4f test1_mat = matrix4f_elements(test1_elems);
    print_matrix(&test1_mat);
    Matrix_4f test2_mat = matrix4f_elements(test2_elems);

    Matrix_4f* result_mat = matrix4f_multiply(&test1_mat, &test2_mat);

    print_matrix(result_mat);

    init_input(p_window);

    while (!window_is_closed(p_window))
    {
        window_clear(p_window, 0.5f, 0.5f, 0.5f, 0.5f);

        if (key_pressed(K_ESCAPE))
        {
            window_close(p_window);
        }

        window_update(p_window);
    }

    free_window(p_window);
    return 0;
}
