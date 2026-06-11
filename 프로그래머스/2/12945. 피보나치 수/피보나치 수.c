#include<stdio.h>

int solution(int n)
{
    long long fn;
    long long fn_1 = 1;
    long long fn_2 = 0;
    
    for(int i = 1; i < n; i++)
    {
        fn = (fn_1 + fn_2)%1234567;
        fn_2 = fn_1;
        fn_1 = fn;
    }
    
    return fn;
}