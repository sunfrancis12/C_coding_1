#include<stdio.h>
int main(){
    
    int n,sum=0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate):");
    scanf("%d",&n);

    while (n!=0){
        sum +=n;
        scanf("%d",&n);
    }
    printf("\nThe sum is: %d",sum);

    return 0;
    
}