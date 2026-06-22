// Write a program to Input and display array.

#include<stdio.h>
int main(){
    int i,n;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Elements in the array are: ");
    for(i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}