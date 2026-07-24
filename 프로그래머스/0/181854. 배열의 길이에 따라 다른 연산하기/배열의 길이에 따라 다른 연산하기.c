#include <stdlib.h>

int* solution(int arr[], size_t arr_len, int n) {
    int* answer = (int*)malloc(sizeof(int) * arr_len);

    for (int i = 0; i < arr_len; i++) {
        answer[i] = arr[i];

        if (arr_len % 2 == 1) {    
            if (i % 2 == 0)
                answer[i] += n;
        } else {                     
            if (i % 2 == 1)
                answer[i] += n;
        }
    }

    return answer;
}