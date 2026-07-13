// Write a program to Create Menu-Driven String Operations System.

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int c;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("\n1. Find Length\n");
    printf("2. Reverse String\n");
    printf("3. Check Palindrome\n");
    printf("4. Display String\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("Length = %d\n", strlen(str) - 1);
            break;
        case 2: {
            int i;
            for(i = strlen(str) - 2; i >= 0; i--) {
                printf("%c", str[i]);
            }
            printf("\n");
            break;
        }
        case 3: {
            int i, j = strlen(str) - 2, flag = 1;

            for(i = 0; i < j; i++, j--) {
                if(str[i] != str[j]) {
                    flag = 0;
                    break;
                }
            }
            if(flag)
                printf("Palindrome String\n");
            else
                printf("Not a Palindrome String\n");

            break;
        }
        case 4:
            printf("String: %s", str);
            break;
        case 5:
            printf("Thank you!\n");
            break;
        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}