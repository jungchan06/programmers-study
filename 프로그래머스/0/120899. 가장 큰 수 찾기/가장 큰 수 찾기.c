#include <stdio.h>
#include <stdlib.h>

int* solution(int array[], size_t array_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);

    int max = array[0];
    int index = 0;

    for (int i = 1; i < array_len; i++) {
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    }

    answer[0] = max;
    answer[1] = index;

    return answer;
}