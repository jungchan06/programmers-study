#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) 
{
    int* answer = (int*)malloc(sizeof(int) * 11);
    
    long long temp = n;
    
    int i = 0;
    
    while (temp > 0)
    {
        answer[i++] = temp % 10;
        temp /= 10;   
    }
    
    return answer;
}