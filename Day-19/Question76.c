// Write a program to Find diagonal sum.

#include<stdio.h>
int main(){
    int i,j,m,sum = 0;
    printf("Enter the order of matrix in m X m form where m is:");
    scanf("%d",&m);
    int arr1[m][m];

    printf("Enter the value of first matrix's Element.\n");
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < m ; j++){
            printf("Enter the value of %d X %d element:",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    for(i = 0 ; i < m ; i++){
        sum += arr1[i][i];
    }

    printf("Sum of diagonal of the matrix is: %d",sum);


    return 0;
}