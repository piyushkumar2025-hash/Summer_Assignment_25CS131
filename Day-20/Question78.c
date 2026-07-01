// Write a program to Check symmetric matrix.

#include<stdio.h>
int main(){
    int i,j,m,a = 0;
    printf("Enter the order of matrix in m X m form where m is:");
    scanf("%d",&m);
    int arr1[m][m];

    printf("Enter the value of matrix's Element.\n");
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < m ; j++){
            printf("Enter the value of %d X %d element:",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("After transpose of the matrix we get:\n");
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < m ; j++){
            if(arr1[i][j] != arr1[j][i]){
                a = 1;
                break;
            }
        }
        printf("\n");
    }

    if(a == 1){
        printf("Enter matrix is not symmetric matrix");
    }else{
        printf("Enter matrix is symmetric matrix");
    }


    return 0;
}