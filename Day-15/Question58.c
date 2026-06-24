// Write a program to Rotate array left.

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
        x = arr[0];

        for(i = 0 ; i < n ; i++){
            if(i != n-1){
                arr[i] = arr[i+1];
            }
            
        }
        arr[n-1] = x;
    }

    printf("Elements in the array are after rotating %d times left are: ",a);
    for(i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}