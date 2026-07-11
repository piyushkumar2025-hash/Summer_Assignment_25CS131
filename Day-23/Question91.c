// Write a program to Check anagram strings.

#include<stdio.h>
#include<string.h>

int main() {
    char str1[100], str2[100], b;
    int i, j, a;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    a = strlen(str2) - 1;
    for(i = 0; i < strlen(str1); i++) {
        for(j = 0; j <= a; j++) {
            if(str1[i] == str2[j]) {
                b = str2[a];
                str2[a] = str2[j];
                str2[j] = b;
                a--;
                break;
            }
        }
    }

    if(a == -1) {
        printf("The given strings are Anagrams");
    } else {
        printf("The given strings are not Anagrams");
    }

    return 0;
}