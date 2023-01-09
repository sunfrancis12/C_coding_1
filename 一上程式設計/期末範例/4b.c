#include<stdio.h>
#include<string.h>

int main(){

    char c[100]="",cp[100]="",check[8]="";

    gets(c);

    for(int i=0;i<8;i++){
        check[i] = c[i];
    }
    

    if(strcmp(check,"reverse ")==0){

        for(int i=0;i<strlen(c)-8;i++){
            cp[i] = c[strlen(c)-1-i];
        }

        puts(cp);

        for(int i=0;i<strlen(cp);i++){
            if(cp[i]==' '){
                for(int j=i-1;cp[j]!=' ' && j!=-1;j--){
                    printf("%c",cp[j]);
                }
                printf(" ");
            }

            if(i==strlen(cp)-1){
                for(int j=i;cp[j]!=' ';j--){
                    printf("%c",cp[j]);
                }
            }
        }


    }else{
        printf("No command");
    }



}