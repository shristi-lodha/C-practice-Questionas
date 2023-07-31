//Pattern Printing: Write a C program to print the following pattern:

//Input: N = 5

//Output: E D E C D E B C D E A B C D E

#include<stdio.h>
int main(){
    int n;
    printf("Enter the Input :");
    scanf("%d",&n);
     //Doing this now this program is not specific it is general as it not always start with 'E'
   //it depends on 'n' value.
    char ch1=n+64;
  
   //char ch1='E';//whatever n value it always start with 'E'
    char chtemp;
    char temp2=ch1;
    for(int i=1;i<=n;i++){
    chtemp=temp2;       
        for(int j=1;j<=i && chtemp<=ch1;j++){
               printf("%c ",chtemp);
              chtemp++;
        }
        printf("\n");
    temp2--;
    }
    return 0;
}