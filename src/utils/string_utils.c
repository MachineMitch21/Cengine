
#include <utils/string_utils.h>

struct String_s {
    char* _cstr;
};

STRING* CENGINE_CALL new_string(const char* str)
{
    STRING* string = (STRING*) malloc(sizeof(STRING));
    string->_cstr = (char*) malloc(strlen(str) * sizeof(char) + 1);

    strcpy(string->_cstr, str);
    return string;
}

void    CENGINE_CALL free_string(STRING* str)
{
    str = NULL;
    free(str);
}

char*   CENGINE_CALL string_cstr(const STRING* str)
{
    assert(str != NULL);

    return str->_cstr;
}

void    CENGINE_CALL string_append(STRING* str1, const STRING* str2)
{
    assert(str1 != NULL && str2 != NULL);

    str1->_cstr = (char*) realloc(str1->_cstr, sizeof(char) * (string_length(str1) + string_length(str2)));

    strcat(str1->_cstr, str2->_cstr);
}

void    CENGINE_CALL string_append_c(STRING* str1, const char* str2)
{
    assert(str1 != NULL);
    str1->_cstr = (char*) realloc(str1->_cstr, sizeof(char) * (string_length(str1) + strlen(str2)));

    strcat(str1->_cstr, str2);
}

int     CENGINE_CALL string_length(const STRING* str)
{
    assert(str != NULL);
    return strlen(str->_cstr);
}

STRING* CENGINE_CALL string_substr(const STRING* str, int start_pos, int length)
{
    int i;

    char* temp = (char*) malloc(sizeof(char) * (length + 1));

    for (i = 0; i < length; i++)
    {
        temp[i] = str->_cstr[i + start_pos - 1];
    }
    temp[i + 1] = '\0';

    STRING* substr = new_string(temp);
    free(temp);
    return substr;
}
