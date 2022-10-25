#include<stdio.h>
int main(){

    int i=1;
    int num=0;
    while(i<=10){
        num += i;
        i++;
    }

    printf("%d",num);

    return 0;
}