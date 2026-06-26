// Write a program to Find missing number in array.

#include<stdio.h>
int main(){
    int i,n,a,b;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element need to be checked if missing or not: ");
    scanf("%d",&a);
    for(i = 0 ; i < n ; i++){
        if(a == arr[i]){
            printf("No, the number is not missing it is found at %d position",i+1);
            b = 0;
            break;
        }else{
            b = 1;
        }
    }
    if(b == 1){
        printf("Yes, the number is missing in the array.");
    }

    return 0;
}