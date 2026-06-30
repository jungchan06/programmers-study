#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool is_vowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

char* solution(const char* my_string)
{
    int len = strlen(my_string);
    char* answer = (char*)malloc(len + 1);

    int idx = 0;

    for (int i = 0; i < len; i++)
    {
        if (!is_vowel(my_string[i]))
        {
            answer[idx++] = my_string[i];
        }
    }

    answer[idx] = '\0';

    return answer;
}