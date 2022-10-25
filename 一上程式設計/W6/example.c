#include<stdio.h>
typedef float Dollars;
int main(){
    Dollars us,tw;
    char ch;
    int len=0;

    do{
        ch = getchar();
        len = len +1;
    }while(ch != '\n');

    printf("%d",len);
}