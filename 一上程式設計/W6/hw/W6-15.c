#include<stdio.h>
int main(){
    int i,n,odd;
    printf("\nThis program prints a table of squares.\n");
    printf("Enter number of entries in table:");
    scanf("%d",&n);
    printf("\n");

    i = 1;
    odd= 3;

    for (int s = 1; i <= n; odd+=2){
        printf("%10d%10d\n", i,s);
        i++;
        s += odd;
    }
    
    return 0;
}