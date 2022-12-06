#include<stdio.h>

int main(){
    int a,b,c,d,n,temp=0;
    scanf("%d",&a); //0
    scanf("%d",&b); //1
    scanf("%d",&c); //2
    scanf("%d",&d); //3
    scanf("%d",&n);

    if(n<0){
        printf("error");
        return 0;
    }

    for (int i = 4; i <=n+3 ; i++){
        temp = d + c -(a*2);
        a = b;
        b = c;
        c = d;
        d = temp;
    }

    printf("%d",temp);

    return 0;
    
}