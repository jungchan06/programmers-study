#include <stddef.h>

int solution(int dot[], size_t dot_len) {
    int x = dot[0];
    int y = dot[1];

    if (x > 0 && y > 0)
        return 1;
    else if (x < 0 && y > 0)
        return 2;
    else if (x < 0 && y < 0)
        return 3;
    else
        return 4;
}