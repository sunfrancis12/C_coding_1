#include<stdio.h>

int CE(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",CE(a,b));
}