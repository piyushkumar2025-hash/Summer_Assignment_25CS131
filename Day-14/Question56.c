// Write a program to Find duplicates in array.

#include<stdio.h>
int main(){
    int i,n,a,duplicate = 0;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element who's Duplicate need to be checked: ");
    scanf("%d",&a);
    for(i = 0 ; i < n ; i++){
        if(a == arr [i]){
            duplicate++;
        }
    }
    printf("There are %d dupliacte of %d.",duplicate,a);

    return 0;
}