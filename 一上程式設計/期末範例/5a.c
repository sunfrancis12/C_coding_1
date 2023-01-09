#include<stdio.h>
#include<string.h>

int main(){

    char c[100]="";

    gets(c);

    for(int i=0;i<strlen(c);i++){
        
        //轉大寫
        if(c[i]>='a' && c[i]<='z'){
            c[i] -= 32;
        }
    }

    puts(c);
}