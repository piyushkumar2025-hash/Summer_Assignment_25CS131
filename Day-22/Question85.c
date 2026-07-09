// Write a program to Check palindrome string.

#include<stdio.h>
int main() {
    char str[100],str2[100];
    int i = 0,j = 0;
    printf("Enter a string: ");
    scanf("%s",str);
    while(str[i+1] != '\0'){
        i++;
    }
    
    while(i >= 0){
        str2[j] = str[i];
        i--;
        j++;
    }

    for(i = 0 ; str[i] != '\0' ; i++){
        if(str[i] == str2[i]){
            j = 0;
        }else{
            j = 1;
            break;
        }
    }

    if(j = 0){
        printf("The given string is a palindrome string");
    }else{
        printf("The given string is not a palindrome string");
    }

    return 0;
}