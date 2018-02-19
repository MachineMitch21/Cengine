
#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

typedef int bool;
#define true 1
#define false 0

#ifdef __WIN32__
    #ifdef CENGINE_BUILD
        #define CENGINE_API __declspec(dllexport)
    #else
        #define CENGINE_API __declspec(dllimport)
    #endif // CENGINE_BUILD
    #define CENGINE_CALL __cdecl
#else
    #define CENGINE_API
#endif // __WIN32__




#endif // PREPROCESSOR_H
