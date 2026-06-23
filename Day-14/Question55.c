// Write a program to Second largest element.

#include<stdio.h>
int main(){
    int i,n,a,b;
    a = b = 0;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i = 0 ; i < n ; i++){
        if(a <= arr[i]){
            a = arr[i];
            b = a ;
        }else if(b <= arr[i]){
            b = arr[i];
        }
    }
    printf("Second largest element in tge array is: %d",b);

    return 0;
}