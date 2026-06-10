#include <stdio.h>

int solution(int n)
{
    long long factorial = 1;

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * (n+i) / i;
    }

    return factorial/(n + 1);
}