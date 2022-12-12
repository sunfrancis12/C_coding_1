#include<stdio.h>

int main(){
    int a,b,n,temp=0;
    scanf("%d",&a); //0
    scanf("%d",&b); //1
    scanf("%d",&n);

    for (int i = 2; i <=n+1 ; i++){
        temp = a + b;
        a = b;
        b = temp;
        if(i>=4){
            
        }
    }

    printf("%d",temp);
    
}