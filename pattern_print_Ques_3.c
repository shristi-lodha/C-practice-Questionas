//Pattern Printing: Write a C program to print the following pattern:

//Input: N = 5

//Output: A BC DEF GHIJ KLMNO

#include<stdio.h>
int main(){
    int n;
    char ch='A';
    printf("Enter the input :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
              ch++;
        }
        printf("\n");
      
    }
    return 0;
}