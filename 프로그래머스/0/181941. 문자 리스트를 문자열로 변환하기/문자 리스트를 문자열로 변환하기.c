#include <stddef.h>

char* solution(const char* arr[], size_t arr_len) {
    static char answer[201];

    for (size_t i = 0; i < arr_len; i++) {
        answer[i] = arr[i][0];
    }

    answer[arr_len] = '\0';

    return answer;
}