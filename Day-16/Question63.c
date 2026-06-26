// Write a program to Find pair with given sum.

#include<stdio.h>
int main(){
    int i,n,j,a,sum;
    a = 0;
    int array[100][2];
    printf("Enter number of element required in array: ");
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum whose pair need to be found: ");
    scanf("%d",&sum);
    for(i = 0 ; i < n ; i++){
        for(j = i + 1 ; j < n ; j++){
            if(arr[i] + arr[j] == sum){
                array[a][0] = arr[i];
                array[a][1] = arr[j];
                a++;
            }
        }
    }

    printf("There are %d pair within the array for the given sum,\nThose are:\n",a);
    for(i = 0 ; i < a ; i++){
        printf("%d+%d=%d\n",array[i][0],array[i][1],sum);
    }

    return 0;
}