#include <stdio.h>

double solution(int arr[], size) 
{
    double answer = 0;
    
    for(int i = 0; i < size; i++)
    {
        answer += arr[i];
    }
    
    answer /= size;
    
    
    return answer;
}