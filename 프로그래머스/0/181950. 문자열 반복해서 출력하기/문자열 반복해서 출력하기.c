#include <stdio.h>

int main(void)
{
    char str[10];
    int n;
    
    scanf("%s", &str);
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        printf("%s", str);
    }
}