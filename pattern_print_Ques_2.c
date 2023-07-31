//Pattern Printing: Write a C program to print the following pattern:

//Input: N = 5

//Output: 1 232 34543 4567654 567898765
#include<stdio.h>
int main(){
    int n;
    printf("Enter the input :");
    scanf("%d",&n);
    int s,t;
    for(int i=1;i<=n;i++){
        s=i;
        for(int j=1;j<=i;j++){
            printf("%d",s);
            s++;
        } 
        t=s-2; 
        for(int j=1;j<i;j++){
            printf("%d",t);
            t--;
        }

        printf("\n");
    }
    return 0;
}