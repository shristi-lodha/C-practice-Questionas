// D Array Operations: Write a C program to multiply two matrices and store the result in another matrix.

// Input: Matrix1 = {{1, 2}, {3, 4}} Matrix2 = {{5, 6}, {7, 8}}

// Output: Result = {{19, 22}, {43, 50}}

#include<stdio.h>
int main(){
    int midresult=0;
    int size1row,size1col,size2row,size2col;
    printf("Enter the size of first matrix :\n");
    printf("Of Rows :");
    scanf("%d",&size1row);
    printf("Of Columns :");
    scanf("%d",&size1col);
    printf("Enter the size of second matrix :\n");
    printf("Of Rows :");
    scanf("%d",&size2row);
    printf("Of Columns :");
    scanf("%d",&size2col);
    if(size1col ==size2row){
    int arr1[size1row][size1col];
    int arr2[size2row][size2col];
    int result[size1row][size2col];
    printf("Enter the elements of first Matrix :\n");
    for(int i=0;i<size1row;i++){
        for(int j=0;j<size1col;j++){
              printf("for (%d , %d)",i,j);
              scanf("%d",&arr1[i][j]);  
        }
    }

     printf("Enter the elements of second Matrix :\n");
    for(int i=0;i<size2row;i++){
        for(int j=0;j<size2col;j++){
              printf("for (%d , %d) :",i,j);
              scanf("%d",&arr2[i][j]);  
        }
    }
     printf("first Matrix is:\n");
    for(int i=0;i<size1row;i++){
        for(int j=0;j<size1col;j++){
              printf("%d ",arr1[i][j]);
                
        }
        printf("\n");
    }

     printf("Second Matrix is:\n");
    for(int i=0;i<size2row;i++){
        for(int j=0;j<size2col;j++){
              printf("%d ",arr2[i][j]);
                
        }
        printf("\n");
    }
    printf("After Multiplication of two matrix resultant matrix is :\n");
    for(int i=0;i<size1row;i++){
        for(int j=0;j<size2col;j++){
              midresult=0;
            for(int s=0;s<size1col;s++){
           midresult += arr1[i][s] * arr2[s][j];
        }
        result[i][j]=midresult;

        }
      
    }

     for(int i=0;i<size1row;i++){
        for(int j=0;j<size2col;j++){
           printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    }else{
        printf("Can't Multiply this size of Matrices\n");
    }
    return 0;
}