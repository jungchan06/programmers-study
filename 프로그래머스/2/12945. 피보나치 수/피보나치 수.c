#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    
    int F[100000];
    
    F[0] = 0;
    
    F[1] = 1;
    
    for(int i = 1; i < n; i++)
    {
        F[i+1] = (F[i] + F[i-1])%1234567;
    }
    
    
    
    return F[n];
}