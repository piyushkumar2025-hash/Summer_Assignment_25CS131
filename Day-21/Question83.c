// Write a program to Count vowels and consonants.

#include<stdio.h>
int main() {
    char str[100];
    int i = 0,vowel = 0,consonant = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vowel++;
        }else{
            consonant++;
        }
        i++;
    }
    printf("Number of vowels in string are: %d\nAnd number of consonants are: %d",vowel,consonant);
    

    

    return 0;
}