#include <stdio.h>

char* solution(const char* my_string, const char* overwrite_string, int s) 
{
    static char answer[1001];

    int k = 0;

    while (my_string[k] != '\0') 
    {
        answer[k] = my_string[k];
        k++;
    }

    answer[k] = '\0';

    int j = 0;
    while (overwrite_string[j] != '\0') 
    {
        answer[s + j] = overwrite_string[j];
        j++;
    }

    return answer;
}