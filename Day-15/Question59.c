// Write a program to Rotate array right.

#include<stdio.h>
int main(){
    int i,n,a,x,j;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("How many times you need to rotate the array left: ");
    scanf("%d",&a);

    for(j = 0 ; j < a ; j++){
        x = arr[n-1];

        for(i = 1 ; i < n ; i++){
            arr[n-i] = arr[n-(i+1)];
        }
        arr[0] = x;
    }

    printf("Elements in the array are after rotating %d times right are: ",a);
    for(i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}