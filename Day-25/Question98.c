// Write a program to Find common characters in strings.

#include<stdio.h>
int main() {
    char str1[100], str2[100];
    int i, j;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    printf("Common characters are: ");
    for(i = 0; str1[i] != '\0' && str1[i] != '\n'; i++) {

        for(j = 0; str2[j] != '\0' && str2[j] != '\n'; j++) {

            if(str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}