// Write a program to Find column-wise sum.

#include<stdio.h>
int main(){
    int i,j,m,n,a,sum = 0;
    printf("Enter the order of matrix in m X n form where m is:");
    scanf("%d",&m);
    printf("and n is:");
    scanf("%d",&n);
    int arr1[m][n];

    printf("Enter the value of matrix's Element.\n");
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){
            printf("Enter the value of %d X %d element:",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("which column's Sum do you want: ");
    scanf("%d",&a);
    for(j = 0 ; j < m ; j++){
        sum += arr1[j][a-1];
    }

    printf("Sum of %dth column is %d",a,sum);

    return 0;
}