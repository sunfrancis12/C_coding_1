#include<stdio.h>
int main(){
    int num=0;
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        if(i==num) break;;
        printf("\n");
    }

    return 0;
}