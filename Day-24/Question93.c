// Write a program to Check string rotation.

#include<stdio.h>
#include<string.h>
int main() {
    char str1[100], str2[100], str3[200];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    if(strlen(str1) != strlen(str2)) {
        printf("Strings are not rotation of each other.");
        return 0;
    }
    strcpy(str3, str1);
    strcat(str3, str1);

    if(strstr(str3, str2) != NULL) {
        printf("Strings are rotation of each other.");
    }
    else {
        printf("Strings are not rotation of each other.");
    }

    return 0;
}