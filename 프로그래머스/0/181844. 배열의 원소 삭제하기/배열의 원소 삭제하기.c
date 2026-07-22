#include <stdlib.h>
#include <stdbool.h>

int* solution(int arr[], size_t arr_len, int delete_list[], size_t delete_list_len) {
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    int idx = 0;

    for (int i = 0; i < arr_len; i++) {
        bool found = false;

        for (int j = 0; j < delete_list_len; j++) {
            if (arr[i] == delete_list[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            answer[idx++] = arr[i];
        }
    }

    return answer;
}