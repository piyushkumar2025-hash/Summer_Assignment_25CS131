// Write a program to Bubble sort.

#include<stdio.h>
int main(){
    int i,j,n,a;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(j=0 ; j<=n ; j++){
        for(i = 0 ; i < n-1 ; i++){
            if(arr[i] > arr[i+1]){
                a = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = a;
            }
        }
    }
    
    printf("Elements in the array after Bubble sort are: ");
    for(i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}