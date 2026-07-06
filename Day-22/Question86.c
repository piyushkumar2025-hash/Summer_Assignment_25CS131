// Write a program to Count words in a sentence.

#include<stdio.h>
int main() {
    char str[100];
    int i = 0,word = 1;
    printf("Enter a Sentence: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        if(str[i] == ' '){
            word++;
        }
        i++;
    }
    printf("Number of word in the sentence is: %d",word);
    
    return 0;
}