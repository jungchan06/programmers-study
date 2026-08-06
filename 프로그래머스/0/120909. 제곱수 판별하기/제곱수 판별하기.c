#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) 
{
    int answer = 0;
    
    double num = sqrt(n);
    
    if (num - (int)num == 0)
    {
        answer = 1;
    }
    else
    {
        answer = 2;
    }
    
    return answer;
    
}