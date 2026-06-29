// Write a program to Transpose matrix.

#include<stdio.h>
int main(){
    int i,j,m,n;
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

    printf("After transpose of the matrix we get:\n");
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){
            printf("%d\t",arr1[j][i]);
        }
        printf("\n");
    }


    return 0;
}