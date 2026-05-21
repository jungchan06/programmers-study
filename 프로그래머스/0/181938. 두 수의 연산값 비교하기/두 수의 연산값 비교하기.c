#include <stdio.h>

int solution(int a, int b) {
    int hi = a;
    int bye = b;

    while (bye > 0) {
        hi *= 10;
        bye /= 10;
    }

    hi += b;

    int answer = 2 * a * b;

    if (hi >= answer)
        return hi;
    else
        return answer;
}