

// 2D Array Operations: Write a C program to find the sum of each row and each column in a 2D array.

// Input: Array = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}

// Output: Row Sums = {6, 15, 24} Column Sums = {12, 15, 18}

#include<stdio.h>
int main(){

int sizerow,sizecol;
int midresult1=0;
int midresult2=0;
printf("Enter the size of the matrix -\n");
printf("For rows :");
scanf("%d",&sizerow);
printf("For columns :");
scanf("%d",&sizecol);
int arr[sizerow][sizecol];
int sumrowarr[sizerow];
int sumcolarr[sizecol];
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
         midresult1+=arr[i][j]; 
         midresult2+=arr[j][i];
    }
    sumrowarr[i]=midresult1;
    sumcolarr[i]=midresult2;
    midresult1=0;
    midresult2=0;
}
printf("The sum of each row is :\n{");
for(int i=0;i<sizerow;i++){
    printf("%d ,",sumrowarr[i]);
}
printf("}\n");
printf("The sum of each column is :\n{");
for(int i=0;i<sizecol;i++){
    printf("%d ,",sumcolarr[i]);
}
printf("}\n");
    return 0;
}