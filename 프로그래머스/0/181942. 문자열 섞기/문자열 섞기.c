#include <stdio.h>

char* solution(const char* str1, const char* str2) 
{
    static char answer[100];

    int i = 0;
    int j = 0;

    while (str1[i] != '\0') 
    {
        answer[j++] = str1[i];
        answer[j++] = str2[i];
        i++;
    }

    answer[j] = '\0';

    return answer;
}