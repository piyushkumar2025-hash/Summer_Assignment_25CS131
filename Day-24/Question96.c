// Write a program to Remove duplicate characters.

#include<stdio.h>
int main() {
    char str[100];
    int i, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        for(j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if(str[i] == str[j]) {
                while(str[j] != '\0') {
                    str[j] = str[j + 1];
                    j++;
                }
                j = i;
            }
        }
    }

    printf("String after removing duplicate characters: %s", str);

    return 0;
}