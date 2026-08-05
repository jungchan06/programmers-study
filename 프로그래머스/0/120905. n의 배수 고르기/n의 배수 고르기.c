#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n, int numlist[], size_t numlist_len) 
{
    int* answer = (int*)malloc(sizeof(int) * numlist_len);
    
    int count = 0;
    
    for(int i = 0; i < numlist_len; i++)
    {
        if(numlist[i] % n == 0)
        {
            answer[count] = numlist[i];
            count++;
        }
    }
    return answer;
}