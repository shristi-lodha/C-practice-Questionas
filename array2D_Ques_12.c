

// 2D Array Operations: Write a C program to check if a given 2D array is symmetric or not.

// Input: Array = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}}

// Output: Symmetric
#include<stdio.h>
int main(){

int sizerow,sizecol;
int flag=0;
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
        if(arr[i][j]==arr[j][i]){
            flag=1;
    }else{
        flag=0;
        break;
    }
    }
}
if(flag==1){
    printf("Given Matrix is Symmetric\n");
}else{
       printf("Given Matrix is not Symmetric\n");
}
    return 0;
}