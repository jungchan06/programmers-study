#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    char* answer = (char*)malloc(sizeof(char) * 4);
    
    if(num % 2 == 0)
    {
        strcpy(answer, "Even");
    }
    else
        strcpy(answer, "Odd");
    return answer;
}