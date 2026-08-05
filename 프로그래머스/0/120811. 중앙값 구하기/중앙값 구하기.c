#include <stddef.h>

int solution(int array[], size_t array_len) {
    int temp;

    for (int i = 0; i < array_len - 1; i++) {
        for (int j = i + 1; j < array_len; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    return array[array_len / 2];
}