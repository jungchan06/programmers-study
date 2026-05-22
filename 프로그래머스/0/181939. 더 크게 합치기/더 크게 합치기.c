#include <stdio.h>

int solution(int a, int b) 
{
    int a1 = a;
    int b1 = b;

    while(b1 > 0)
    {
        a1 *= 10;
        b1 /= 10; 
    }

    int a2 = a;
    int b2 = b;

    while (a2 > 0)
    {
        b2 *= 10;
        a2 /= 10; 
    }

    int sum1 = a1 + b;
    int sum2 = a + b2;

    if (sum1 >= sum2)
    {
        return sum1;
    }
    else
    {
        return sum2;
    }
}
