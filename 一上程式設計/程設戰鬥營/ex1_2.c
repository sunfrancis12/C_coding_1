#include<stdio.h>

void prime(int n){
    int temp =2;
    while(n%temp!=0){
        temp++;
    }
    printf("%d",temp);
    n /= temp;
    if(n==1) return;
    prime(n);
}

int main(){
    int n;
    scanf("%d",&n);
    prime(n);
}