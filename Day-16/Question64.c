// Write a program to Remove duplicates from array.

#include<stdio.h>
int main(){
    int i,n,x,j,k;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(i = 0 ; i < n ; i++){
        for(k = i+1 ; k < n ; k++){
            if(arr[i] == arr[k]){
                x = arr[k];
                for(j = k ; j < n ; j++){
                    if(j != n-1){
                        arr[j] = arr[j+1];
                    }
                }
                arr[n-1] = x;
                n--;
            }
        }
    }
    printf("Elements in the array after removing the duplicates are: ");
    for(i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}