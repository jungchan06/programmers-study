#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(const char* my_string, const char* target) {
    int answer = 0;

    if (strstr(my_string, target) != NULL)
        answer = 1;

    return answer;
}