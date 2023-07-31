

// 2D Array Operations: Write a C program to sort rows of a 2D array in ascending order.

// Input: Array = {{9, 2, 6}, {4, 1, 5}, {8, 3, 7}}

// Output: Sorted Array = {{2, 6, 9}, {1, 4, 5}, {3, 7, 8}}

#include<stdio.h>
int main(){

int sizerow,sizecol,temp;
int array[sizecol];
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

printf("\nAfter Sorting rows in Ascending Order our Matrix is :\n");
for(int i=0;i<sizerow;i++){
    for(int j=0;j<sizecol;j++){
        array[j]=arr[i][j];

    }
   for(int p=0;p<sizecol-1;p++){
    for(int q=0;q<sizecol-1-p;q++){
       if(array[q]>array[q+1]){
        temp=array[q];
        array[q]=array[q+1];
        array[q+1]=temp;
       }
    }
   
   }
    for(int j=0;j<sizecol;j++){
        arr[i][j]=array[j];

    }
}
for(int i=0;i<sizerow;i++){
    for(int j=0;j<sizecol;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
    return 0;
}
