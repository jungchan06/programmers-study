#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) 
{
    int* answer = (int*)malloc(sizeof(int) * n);
    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            answer[index++] = i;
        }
    }
    return answer;
}