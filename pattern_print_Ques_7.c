

// Pattern Printing: Write a C program to print the following pattern:

// Input: N = 4

// Output: 1 1 2 1 1 2 3 2 1 1 2 3 4 3 2 1


#include<stdio.h>
int main(){
    int n,j,s=0;
    printf("Enter the Input :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
         s=j-2;
        while(s>=1){
            printf("%d ",s);
            s--;
        }
        printf("\n");
    }
    return 0;
}