// Write a program to Sort names alphabetically.

#include<stdio.h>
#include<string.h>
int main() {
    char str[100][100], temp[100];
    int i, j, n;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar();
    printf("Enter the names:\n");
    for(i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {

            if(strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }

        }
    }
    printf("Names in alphabetical order:\n");

    for(i = 0; i < n; i++) {
        printf("%s", str[i]);
    }

    return 0;
}