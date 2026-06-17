#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int* answer = (int*)malloc(sizeof(int) * n);
    
    int idx = 0;
    
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            answer[idx++] = i;
        }
    }
    return answer;
}