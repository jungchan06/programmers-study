#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) 
{
    int answer = 0;
    
    answer = (((slice - 1) + n) / slice);
    
    return answer;
}