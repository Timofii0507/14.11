#include "functions.h"

int findMin(int a, int b) 
{
    return (a < b) ? a : b;
}

int findMax(int a, int b) 
{
    return (a > b) ? a : b;
}

int square(int x) 
{
    return x * x;
}

int power(int x, int n) 
{
    int result = 1;
    for (int i = 0; i < n; ++i)
        result *= x;
    return result;
}

bool isEven(int x)
{
    return x % 2 == 0;
}

bool isOdd(int x) 
{
    return x % 2 != 0;
}