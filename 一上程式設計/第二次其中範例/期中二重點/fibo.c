#include<stdio.h>

int f[100]={0};

int Fibo(int n){
    int c=0;
    if(n==0 || n==1){
        return 1;
    }
    else{
    c = Fibo(n-1) + Fibo(n-2);
    }
}

int main(){

    int n=0;
    
    while (n!=-1){
        scanf("%d",&n);
        printf("%d\n",Fibo(n));
    }
    
}