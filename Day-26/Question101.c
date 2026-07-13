// Write a program to Create number guessing game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));

    int num,a;
    num = rand() % 10 + 1;
    printf("Guess any number between 1 to 10: ");
    scanf("%d",&a);

    while(num != a){
        printf("You guessed wrong number. Try again: ");
        scanf("%d",&a);
    }
    printf("Congratulation!!You guessed correct number.");

    return 0;
}