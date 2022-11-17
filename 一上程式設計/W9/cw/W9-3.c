#include<stdio.h>

void count_down(int n){
    if(n==0){
        printf("%d",n);
        return;
    }
    printf("%d\n",n);
    n--;
    count_down(n);
}

int main(){
    int n=0;
    scanf("%d",&n);
    count_down(n);
}