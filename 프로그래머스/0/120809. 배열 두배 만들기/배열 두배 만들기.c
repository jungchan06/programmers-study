#include <stdio.h>

int solution(numbers[], size)
{
    for(int i = 0; i < size; i++)
    {
        numbers[i] *= 2;
    }
    
    return numbers;
}