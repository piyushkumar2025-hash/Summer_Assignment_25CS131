// Write a program to Find common elements.

#include<stdio.h>
int main(){
    int i,a,b,j,c = 0,x,k;

    printf("Enter number of element required in first array: ");
    scanf("%d",&a);
    int arr1[a];
    for(i = 0 ; i < a ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr1[i]);
    }

    printf("Enter number of element required in second array: ");
    scanf("%d",&b);
    int arr2[b],arr3[a+b];
    for(i = 0 ; i < b ; i++){
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr2[i]);
    }

    for(i = 0 ; i < a ; i++){
        for(j = 0 ; j < b ; j++){
            if(arr1[i] == arr2[j]){
                arr3[c] = arr1[i];
                c++;

                x = arr2[j];
                for(k = j ; k < b-1 ; k++){
                        arr2[k] = arr2[k+1];
                }
                arr2[b-1] = x;
                b--;
                break;
            }
        }

    }

    printf("Common elements in both the arrays are: ");
    for(i = 0 ; i < c ; i++){
        printf("%d ",arr3[i]);
    }

    return 0;
}