
#include <window.h>
#include <input.h>
#include <vector_math.h>
#include <string_utils.h>

int main(int argc, char** argv)
{
    WINDOW* p_window = create_window(new_string("CENGINE"), 800, 600);

    STRING* str = new_string("Something ");
    STRING* str1 = new_string("happened");

    string_append(str, str1);
    free_string(str1);

    STRING* substr = string_substr(str, 1, 11);

    printf("Substring is: %s\n\n", string_cstr(substr));

    printf("String is now: %s\n\n", string_cstr(str));
    free_string(str);

    vec2_f test = vec2f(4, 6);
    vec3_f test1 = vec3f(8, 2, 24);
    vec4_f test2 = vec4f(68, 23, 92, 10);

    printf("Test vec2 magnitude is: %f", vec2_magnitude_f(&test));

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
