#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* solution(char* myString) {
    for (int i = 0; myString[i] != '\0'; i++) {
        myString[i] = toupper(myString[i]);
    }
    return myString;
}