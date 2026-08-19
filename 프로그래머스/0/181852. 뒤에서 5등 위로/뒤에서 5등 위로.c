#include <stdlib.h>

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int* solution(int num_list[], int num_list_len) {
    qsort(num_list, num_list_len, sizeof(int), compare);

    return num_list + 5;
}