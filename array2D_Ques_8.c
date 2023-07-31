

// 2D Array Operations: Write a C program to find the sum of all elements in a 2D array.

// Input: Array = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}

// Output: Sum = 45

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
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            sum+=arr[i][j];
        }
    }
    printf("Sum of all elements of this 2D Array is : %d\n",sum);
    return 0;
}