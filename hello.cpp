#include "pch.h"
#include <iostream>
#include "hello.h"

void PrintHello()
{
    std::cout << "Hello world";
}

int GaussSum(int n)
{
    int result{};
    for (int i = 1; i <= n; i++)
        result += i;
    return result;
}