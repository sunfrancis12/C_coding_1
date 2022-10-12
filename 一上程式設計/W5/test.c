#include<stdio.h>
int main(){
    int a=0;
    int i = 10;

    while(i>1){
        a++;
        printf("%d\n",a);

        if(a==100) break;
    }
}