// Write a program to Multiply matrices.

#include<stdio.h>
int main(){
    int i,j,k,m,n,p,q,sum;

    printf("Enter the order of first matrix (m X n).\n");
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter the order of second matrix (p X q).\n");
    printf("Enter p: ");
    scanf("%d",&p);
    printf("Enter q: ");
    scanf("%d",&q);

    if(n != p){
        printf("Matrix multiplication is not possible.");
        return 0;
    }

    int arr1[m][n], arr2[p][q], arr3[m][q];

    printf("Enter the elements of first matrix.\n");
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < n ; j++){
            printf("Enter element [%d][%d]: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter the elements of second matrix.\n");
    for(i = 0 ; i < p ; i++){
        for(j = 0 ; j < q ; j++){
            printf("Enter element [%d][%d]: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < q ; j++){
            sum = 0;
            for(k = 0 ; k < n ; k++){
                sum = sum + (arr1[i][k] * arr2[k][j]);
            }
            arr3[i][j] = sum;
        }
    }

    printf("The multiplication of both matrices is:\n");
    for(i = 0 ; i < m ; i++){
        for(j = 0 ; j < q ; j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}