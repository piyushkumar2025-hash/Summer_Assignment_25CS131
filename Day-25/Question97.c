// Write a program to Merge two sorted arrays.

#include<stdio.h>
int main() {
    int n1, n2, i, j = 0, k = 0;
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int arr2[n2], arr3[n1 + n2];
    printf("Enter the elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    i = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
        }
        k++;
    }
    while(i < n1) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while(j < n2) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    printf("Merged array is:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}