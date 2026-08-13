#include <stdio.h>

char* solution(int n) {
    char* answer = (char*)malloc(12);
    sprintf(answer, "%d", n);
    return answer;
}