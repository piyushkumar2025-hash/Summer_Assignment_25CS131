// Write a program to Find sum and average of array.

#include<stdio.h>
int main(){
    int i,n,sum,avg;
    sum = 0;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i = 0 ; i < n ; i++){
        sum += arr[i];
    }

    for(i = 0 ; i < n ; i++){
        avg = sum/n;
    }
    printf("\nSum of the array is: %d \nAverage of the array is: %d",sum,avg);

    return 0;
}