#include<stdio.h>
int main(){
    
    int GCD=0,x,y,small;

    printf("Enter a fraction (x/y): ");
    scanf("%d/%d",&x,&y);

    if(y<x) small = y;
    else small =x;

    for(int i=1;i<=small;i++){
        if(x%i==0 && y%i==0) GCD=i;
    }

    printf("GCD = %d\n",GCD);
    printf("In lowest terms: %d/%d",x/GCD,y/GCD);

}