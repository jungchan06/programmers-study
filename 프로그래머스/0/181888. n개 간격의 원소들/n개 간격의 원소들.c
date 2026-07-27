#include <stdlib.h>

int* solution(int num_list[], int num_list_len, int n) {
    int size = (num_list_len + n - 1) / n;
    int* answer = (int*)malloc(sizeof(int) * size);

    int idx = 0;
    for (int i = 0; i < num_list_len; i += n) {
        answer[idx++] = num_list[i];
    }

    return answer;
}