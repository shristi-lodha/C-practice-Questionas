// Pattern Printing: Write a C program to print the following pattern:

// Input: N = 4

// Output: 1 22 333 4444

#include<stdio.h>
int main(){
    int n;
    printf("Enter the Input :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}