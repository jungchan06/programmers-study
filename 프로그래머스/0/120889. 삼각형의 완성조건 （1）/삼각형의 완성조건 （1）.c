#include <stddef.h>

int solution(int sides[], size_t sides_len) {
    int max = sides[0];
    int sum = sides[0] + sides[1] + sides[2];

    if (sides[1] > max) max = sides[1];
    if (sides[2] > max) max = sides[2];

    if (max < sum - max)
        return 1;
    else
        return 2;
}