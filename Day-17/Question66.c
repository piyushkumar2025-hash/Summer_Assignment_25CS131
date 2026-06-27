// Write a program to Union of arrays.

#include<stdio.h>
int main(){
    int i,a,b,k,x,j,c;

    printf("Enter number of element required in first array: ");
    scanf("%d",&a);
    int arr1[a];
    for(i = 0 ; i < a ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("Enter number of element required in second array: ");
    scanf("%d",&b);
    c =  a+b;
    int arr2[b],arr3[a+b];
    for(i = 0 ; i < b ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr2[i]);
    }


    for(i = 0 ; i < a ; i++){
        arr3[i] = arr1[i];
    }
    for(i = 0 ; i < b ; i++){
        arr3[i+a] = arr2[i];
    }

    for(i = 0 ; i < c ; i++){
        for(k = i+1 ; k < c ; k++){
            if(arr3[i] == arr3[k]){
                x = arr3[k];
                for(j = k ; j < c ; j++){
                    if(j != c-1){
                        arr3[j] = arr3[j+1];
                    }
                }
                arr3[c-1] = x;
                c--;
            }
        }
    }

    printf("Union of both the arrays are: ");
    for(i = 0 ; i < c ; i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}