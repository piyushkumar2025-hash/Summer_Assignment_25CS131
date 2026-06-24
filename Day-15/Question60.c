// Write a program to Move zeroes to end.

#include<stdio.h>
int main(){
    int i,n,x,j;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(i = 0 ; i < n ; i++){
        if(arr[i] == 0){

            x = arr[i];
            for(j = i ; j < n ; j++){
                if(j != n-1){
                    arr[j] = arr[j+1];
                }
            }
            arr[n-1] = x;

        }
    }
    printf("Elements in the array after moving zeroes to the end are: ");
    for(i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}