// Write a program to Character frequency.

#include<stdio.h>

int main() {
    char str[100], n;
    int i = 0, frequency = 0;

    printf("Enter a Sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character whose frequency need to be checked: ");
    scanf(" %c", &n);

    while(str[i] != '\0'){
        if(str[i] == n){
            frequency++;
        }
        i++;
    }

    printf("Frequency of %c in the sentence is: %d", n, frequency);

    return 0;
}