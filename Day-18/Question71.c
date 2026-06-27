// Write a program to Binary search. 

#include<stdio.h>
int main(){
    int i,n,mid,a,b = 0,low,high;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];

    low = 0;
    high = n-1;
    mid = (low + high)/2;

    printf("Enter the elements in ascending order.\n");
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter the element you need to find: ");
    scanf("%d",&a);


    while(low <= high){
        mid = (low + high)/2;
        if(arr[mid] > a){            
            high = mid-1;
        }else if(arr[mid] < a){
            low = mid+1;
        }else if(arr[mid] == a){
            b = 1;
            break;
        }
    }

    if(b == 1){
        printf("Element found at position %d.",mid+1);
    }else{
        printf("Element not found in the array.");
    }


    return 0;
}