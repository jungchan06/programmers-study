#include <stddef.h>

int solution(int num_list[], size_t num_list_len) {
    for (size_t i = 0; i < num_list_len; i++) {
        if (num_list[i] < 0) {
            return (int)i;
        }
    }
    return -1;
}