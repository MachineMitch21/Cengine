
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
    assert(str != NULL);
    str->_cstr = NULL;
    free(str->_cstr);
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

// reverses a string 'str' of length 'len'
void reverse(char *str, int len)
{
    int i=0, j=len-1, temp;
    while (i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
}

 // Converts a given integer x to string str[].  d is the number
 // of digits required in output. If d is more than the number
 // of digits in x, then 0s are added at the beginning.
int intToStr(int x, char str[], int d)
{
    int i = 0;
    while (x)
    {
        str[i++] = (x%10) + '0';
        x = x/10;
    }

    // If number of digits required is more, then
    // add 0s at the beginning
    while (i < d)
        str[i++] = '0';

    reverse(str, i);
    str[i] = '\0';
    return i;
}

// Converts a floating point number to string.
STRING* CENGINE_CALL ftoa(float n, char *res, int afterpoint)
{
    // Extract integer part
    int ipart = (int)n;

    // Extract floating part
    float fpart = n - (float)ipart;

    // convert integer part to string
    int i = intToStr(ipart, res, 0);

    // check for display option after point
    if (afterpoint != 0)
    {
        res[i] = '.';  // add dot

        // Get the value of fraction part upto given no.
        // of points after dot. The third parameter is needed
        // to handle cases like 233.007
        fpart = fpart * pow(10, afterpoint);

        intToStr((int)fpart, res + i + 1, afterpoint);
    }

    STRING* string = new_string(res);
    return string;
}
