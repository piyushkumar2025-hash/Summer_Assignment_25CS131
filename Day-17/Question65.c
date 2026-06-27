// Write a program to Merge arrays.

#include<stdio.h>
int main(){
    int i,a,b;

    printf("Enter number of element required in first array: ");
    scanf("%d",&a);
    int arr1[a];
    for(i = 0 ; i < a ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("Enter number of element required in second array: ");
    scanf("%d",&b);
    int arr2[b],arr3[a+b];
    for(i = 0 ; i < b ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr2[i]);
    }

    for(i = 0 ; i < a ; i++){
        arr3[i] = arr1[i];
    }
    for(i = 0 ; i < b ; i++){
        arr3[i+a] = arr2[i];
    }
    
    printf("Elements after merging both the arrays are: ");
    for(i = 0 ; i < a+b ; i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}