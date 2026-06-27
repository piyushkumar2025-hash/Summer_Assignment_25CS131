// Write a program to Selection sort.

#include<stdio.h>

int main(){
    int i,j,n,min,temp,minIndex;
    printf("Enter number of element required in array: ");
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++){
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(j = 0; j < n - 1; j++){
        min = arr[j];
        minIndex = j;
        for(i = j + 1; i < n; i++){
            if(min > arr[i]){
                min = arr[i];
                minIndex = i;
            }
        }
        temp = arr[j];
        arr[j] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Elements in the array after selection sort are: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}