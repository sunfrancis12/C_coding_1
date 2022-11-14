#include<stdio.h>
int main(){
    char a='a',b[100]="";
    int i=0;

    printf("Enter message: ");


    while (a!='\n'){
        scanf("%c",&a);
        if(a>='a' && a<='z') a = a-32;
        if(a=='A') a = '4';
        if(a=='B') a = '8';
        if(a=='E') a = '3';
        if(a=='I') a = '1';
        if(a=='O') a = '0';
        if(a=='S') a = '5';

        b[i] = a;
        i++;
    }

    b[i-1]='\0';

    printf("In B1FF-speak: %s!!!!!!!!!!",b);
    

}