// Write a program to Create Menu-Driven Array Operations System.

#include <stdio.h>
int main() {
    int arr[100], n, i, c, sum = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n1. Display Array\n");
    printf("2. Find Sum\n");
    printf("3. Find Maximum\n");
    printf("4. Find Minimum\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            break;
        case 2:
            for(i = 0; i < n; i++) {
                sum += arr[i];
            }
            printf("Sum = %d\n", sum);
            break;
        case 3: {
            int max = arr[0];
            for(i = 1; i < n; i++) {
                if(arr[i] > max) {
                    max = arr[i];
                }
            }
            printf("Maximum = %d\n", max);
            break;
        }
        case 4: {
            int min = arr[0];
            for(i = 1; i < n; i++) {
                if(arr[i] < min) {
                    min = arr[i];
                }
            }
            printf("Minimum = %d\n", min);
            break;
        }
        case 5:
            printf("Thank you!\n");
            break;
        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}