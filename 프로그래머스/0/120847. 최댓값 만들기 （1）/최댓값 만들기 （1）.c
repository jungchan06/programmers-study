#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int solution(int numbers[], size_t numbers_len) {
    qsort(numbers, numbers_len, sizeof(int), compare);

    int a = numbers[0] * numbers[1];
    int b = numbers[numbers_len - 1] * numbers[numbers_len - 2];

    return a > b ? a : b;
}