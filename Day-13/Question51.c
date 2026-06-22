// Write a program to Find largest and smallest element.

#include<stdio.h>
int main(){
    int i,n,max,min;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    for(i = 0 ; i < n ; i++){
        if(max <= arr[i]){
            max = arr[i];
        }
    }

    for(i = 0 ; i < n ; i++){
        if(min >= arr[i]){
            min = arr[i];
        }
    }
    printf("\nMaximum element in array is: %d\nMinimum element in array is: %d",max,min);



    return 0;
}