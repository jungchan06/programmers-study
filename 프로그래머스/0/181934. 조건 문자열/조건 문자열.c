#include <stdio.h>

int solution(const char* ineq, const char* eq, int n, int m) {
    if (ineq[0] == '>' && eq[0] == '=') {
        return n >= m;
    }
    else if (ineq[0] == '<' && eq[0] == '=') {
        return n <= m;
    }
    else if (ineq[0] == '>' && eq[0] == '!') {
        return n > m;
    }
    else if (ineq[0] == '<' && eq[0] == '!') {
        return n < m;
    }
    
    return 0;
}