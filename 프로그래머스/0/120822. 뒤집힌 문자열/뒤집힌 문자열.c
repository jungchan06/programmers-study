#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* my_string) 
{
    int len = strlen(my_string);
    char* answer = (char*)malloc(len + 1);

    for (int i = 0; i < len; i++) 
    {
        answer[i] = my_string[len - 1 - i];
    }

    answer[len] = '\0';
    return answer;
}