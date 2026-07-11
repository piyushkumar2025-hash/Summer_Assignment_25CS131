// Write a program to Sort words by length.

#include<stdio.h>
#include<string.h>
int main() {
    char str[100][100], temp[100];
    int i, j, n;
    printf("Enter the number of words: ");
    scanf("%d", &n);
    getchar();
    printf("Enter the words:\n");
    for(i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
        if(str[i][strlen(str[i]) - 1] == '\n') {
            str[i][strlen(str[i]) - 1] = '\0';
        }
    }
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(strlen(str[i]) > strlen(str[j])) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    printf("Words sorted by length:\n");

    for(i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}