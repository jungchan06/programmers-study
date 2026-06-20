#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int k) {
    int len = strlen(my_string);

    char* answer = (char*)malloc(len * k + 1);

    answer[0] = '\0';

    for (int i = 0; i < k; i++) {
        strcat(answer, my_string);
    }

    return answer;
}