#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) 
{
    int arr[100];
    
    for (int i = 0; i < num_list_len; i++)
    {
        arr[i] = num_list[num_list_len - i - 1];
    }
    
    memcpy(num_list, arr, sizeof(int) * num_list_len);
    
    return num_list;
}