// Write a program to Count even and odd elements.

#include<stdio.h>
int main(){
    int i,n,odd,even;
    odd = even = 0;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(i = 0 ; i < n ; i++){
        if(arr[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    printf("\nNumber of even element in array is: %d\nNumber of odd element in array is: %d",even,odd);

    return 0;
}