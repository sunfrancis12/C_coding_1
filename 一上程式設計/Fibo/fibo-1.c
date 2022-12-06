#include<stdio.h>

int main(){
    int a,b,temp;
    scanf("%d",&a); //0
    scanf("%d",&b); //1

    for (int i = 2; i <=6 ; i++){
        temp = a + b;
        a = b;
        b = temp;
        printf("%d\n",temp);
    }
    
}