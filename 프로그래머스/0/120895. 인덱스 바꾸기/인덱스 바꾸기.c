#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, int num1, int num2) {
    char* answer = (char*)malloc(strlen(my_string) + 1);
    strcpy(answer, my_string);

    char temp = answer[num1];
    answer[num1] = answer[num2];
    answer[num2] = temp;

    return answer;
}