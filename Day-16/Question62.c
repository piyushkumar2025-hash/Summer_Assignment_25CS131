// Write a program to Find maximum frequency element.

#include<stdio.h>
int main(){
    int i,n,j,freq,test_freq,a;
    freq = test_freq = 1;
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    
    for(i = 0 ; i < n ; i++){
        for(j = i+1 ; j < n ; j++){
            if(arr[i] == arr[j]){
                test_freq++;
            }
        }
        if(test_freq > freq){
            freq = test_freq;
            a = arr[i];
        }
        test_freq = 1;
    }


    printf("%d have maximum frequency which is: %d",a,freq);

    return 0;
}