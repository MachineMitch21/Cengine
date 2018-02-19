
#ifndef STRING_H
#define STRING_H

#include <preprocessor.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <assert.h>

typedef struct String_s STRING;

#ifdef __cplusplus
extern "C"
{
#endif

    CENGINE_API STRING* CENGINE_CALL new_string(const char* str);
    CENGINE_API void    CENGINE_CALL free_string(STRING* str);
    CENGINE_API char*   CENGINE_CALL string_cstr(const STRING* str);
    CENGINE_API void    CENGINE_CALL string_append(STRING* str1, const STRING* str2);
    CENGINE_API void    CENGINE_CALL string_append_c(STRING* str1, const char* str2);
    CENGINE_API int     CENGINE_CALL string_length(const STRING* str);
    CENGINE_API STRING* CENGINE_CALL string_substr(const STRING* str, int start_pos, int length);

    CENGINE_API STRING* CENGINE_CALL ftoa(float n, char* res, int afterpoint);

#ifdef __cplusplus
}
#endif

#endif // STRING_H
