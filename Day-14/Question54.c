// Write a program to Frequency of an element.

#include<stdio.h>
int main(){
    int i,n,a,frequency = 0;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element who's frequency need to be checked: ");
    scanf("%d",&a);
    for(i = 0 ; i < n ; i++){
        if(a == arr[i]){
            frequency++;
        }
    }
    printf("Frequency of %d is: %d",a,frequency);

    return 0;
}