#include <stdio.h>

int* solution(int num_list[], int num_list_len) {
    int temp;

    for (int i = 0; i < num_list_len; i++) {
        for (int j = i + 1; j < num_list_len; j++) {
            if (num_list[i] > num_list[j]) {
                temp = num_list[i];
                num_list[i] = num_list[j];
                num_list[j] = temp;
            }
        }
    }

    return num_list;
}