#pragma once
#ifdef HELLO_EXPORTS
#define HELLO_API __declspec(dllexport)
#else
#define HELLO_API __declspec(dllimport)
#endif

extern "C" HELLO_API void PrintHello();

extern "C" HELLO_API int GaussSum(int n);