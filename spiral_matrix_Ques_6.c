//Spiral Matrix: Write a C program to create a spiral matrix of size N x N.

//Input: Input: N = 4

//Output: 1 2 3 4 12 13 14 5 11 16 15 6 10 9 8 7
#include<stdio.h>
int main(){
    int order,s=1;
    printf("Enter the order of your spiral matrix :");
    scanf("%d",&order);
    int matrix[order][order];
   // int maxelement=order*order;
    
    // printf("Enter the elements of your matrix :\n");
    // for(int i=0;i<order;i++){
    //     for(int j=0;j<order;j++){
    //            printf("value at (%d,%d) is :",i,j);
    //            scanf("%d",&matrix[i][j]);
    //     }
    // }
    // printf("\nFinally your matrix is :\n");
printf("Your Spiral Matrix of size %d * %d is -\n",order,order);
int tp_left=0;
int tp_right=0;
int btm_left=order-1;
int btm_right=order-1;
for(int i=0;i<order;i++){
    for(int j=0;j<order;j++){
        matrix[i][j] =0;
    }
}
while(tp_left<=btm_right && tp_right<=btm_left){
  
    for(int i=tp_left;i<=btm_left;i++){
 if(matrix[tp_left][i]==0){
    matrix[tp_left][i] = s;
    s++;
    }
   }
tp_right++;
   for(int i=tp_right;i<=btm_right;i++){
    if(matrix[i][btm_right]==0){
        matrix[i][btm_right]=s;
        s++;
    }
   }
   btm_right--;
   for(int i=btm_right;i>=tp_left;i--){
    if(matrix[btm_left][i]==0){
        matrix[btm_left][i]=s;
        s++;
    }
   }
   btm_left--;
   for(int i=btm_left;i>tp_left;i--){
    if(matrix[i][tp_left]==0){
        matrix[i][tp_left]=s;
        s++;
    }
   }
tp_left++;
}
for(int i=0;i<order;i++){
    for(int j=0;j<order;j++){
  printf("%d ",matrix[i][j]);
    }
    printf("\n");
}
    return 0;
}