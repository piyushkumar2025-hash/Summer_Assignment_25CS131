// Write a program to Add matrices.

#include<stdio.h>
int main(){
    int i,j,m,n;
    printf("Enter the order of matrix in m X n form where m is:");
    scanf("%d",&m);
    printf("and n is:");
    scanf("%d",&n);
    int arr1[m][n],arr2[m][n],arr3[m][n];

    printf("Enter the value of first matrix's Element:");
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){
            printf("Enter the value of %d X %d element:",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the value of second matrix's Element:\n");
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){
            printf("Enter the value of %d X %d element:",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("After addition of both matrix we get:\n");
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }


    return 0;
}