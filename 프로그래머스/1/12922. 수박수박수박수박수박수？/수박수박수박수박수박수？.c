#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    char* answer = (char*)malloc(n * 4 + 1);
    answer[0] = '\0';

    for (int i = 0; i < n; i++) {
        strcat(answer, (i % 2 == 0) ? "수" : "박");
    }

    return answer;
}