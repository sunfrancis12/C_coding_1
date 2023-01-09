#include<stdio.h>
#include<string.h>

void censor(char c[]){

    for(int i=0;i<strlen(c);i++){
        if(c[i]=='f' && c[i+1] == 'o' && c[i+2] == 'o'){
            c[i] = 'x';
            c[i+1] = 'x';
            c[i+2] = 'x';
        }
    }

}

int main(){

    char c[100];

    gets(c);
    censor(c);

    printf("%s",c);

}