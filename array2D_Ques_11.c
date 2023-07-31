

// 2D Array Operations: Write a C program to find the largest & smallest element in a 2D array.

// Input: Array = {{4, 2, 7}, {1, 9, 5}, {6, 3, 8}}

// Output: Largest Element = 9 Smallest Element = 1
#include<stdio.h>

int main(){

int sizerow,sizecol;
int min=100;
int max=0;
printf("Enter the size of the matrix -\n");
printf("For rows :");
scanf("%d",&sizerow);
printf("For columns :");
scanf("%d",&sizecol);
int arr[sizerow][sizecol];
printf("Enter the elements of the matrix :\n");
for(int i=0;i<sizerow;i++){
    for(int j=0;j<sizecol;j++){
        printf("For (%d , %d) :",i,j);
        scanf("%d",&arr[i][j]);
    }
}
printf("Your 2D Array is :\n");
for(int i=0;i<sizerow;i++){
    for(int j=0;j<sizecol;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
for(int i=0;i<sizerow;i++){
    for(int j=0;j<sizecol;j++){
        if(min>arr[i][j]){
            min=arr[i][j];
        }
        if(max<=arr[i][j]){
            max=arr[i][j];
        }
    }
}
printf("Largest Element is : %d\nSmallest Element is : %d\n",max,min);
    return 0;
}