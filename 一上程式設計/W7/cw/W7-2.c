#include<stdio.h>
int main(){
    char c;
    int a=0;

    printf("Enter a message:");

    while(c!='\n'){
        scanf("%c",&c);
        a +=1;
    }

    printf("Your message was %d character(s) long.",a-1);

}