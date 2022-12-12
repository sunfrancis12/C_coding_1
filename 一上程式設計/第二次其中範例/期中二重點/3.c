#include<stdio.h>
#include<string.h>

int main(){
    char c[100]="",b[100]="";

    gets(c);

    //reverse(扣除標點符號)
    for (int i = strlen(c)-2; i >=0 ; i--){
        b[strlen(c)-1-i] = c[i];
    }

    //uoy era ohw
    //b[strlen(b)] = ' ';
    puts(b);
    printf("\n");


    for (int i = 0; i < strlen(b)-1; i++){
        if(b[i]==' ' || i==strlen(b)-1){
            int count=0;
            for(int j=i-1; b[j]!=' '&&j>0;j--){
                printf("%c",b[j]);
            }
            printf(" ");
        }
    }

    //補上標點符號
    //printf("%c",c[strlen(c)-1]); 
    

}