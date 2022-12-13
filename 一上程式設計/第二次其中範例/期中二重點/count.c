#include<stdio.h>

int main(){
    int n=0,ans=0;

    scanf("%d",&ans);

    while(n!=ans){
        scanf("%d\n",&n);

        if (n>2000 || n<1){
            printf("x\n");
            continue;
        }
        
        if(n>ans){
            printf("Too-high\n");
        }
        if(n<ans){
            printf("Too-low\n");
        } 
        if(n==ans) printf("Success");
    }
}