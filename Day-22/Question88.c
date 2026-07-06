// Write a program to Remove spaces from string.

#include<stdio.h>
int main() {
    char str[100];
    int i = 0,j;
    printf("Enter a Sentence: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        if(str[i] == ' '){
            j = i;
            while(str[j] != '\0'){
                str[j] = str[j+1];
                j++;
            }
        }
        i++;
    }

    printf("After removing spaces from string we get: ");
    i = 0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
    
    
    return 0;
}