

// 2D Array Operations: Write a C program to find the transpose of a 2D array.

// Input: Array = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}

// Output: Transpose = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}}
#include<stdio.h>
int main(){
    int size;
    printf("Enter the Size :");
    scanf("%d",&size);
    int arr[size][size];
    int sum=0;
    printf("Enter the elements of 2D Array :\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("For (%d , %d) :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nYour Array is :\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("After Transpose of 2D Array your Array is :\n");
    for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
    printf("%d ",arr[j][i]);
}
printf("\n");
    }
    return 0;
}