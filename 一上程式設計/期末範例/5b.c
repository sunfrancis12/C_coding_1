#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int sum =0;
    char c[100]="",cp[100]="",n[10]="";

    gets(c);

    for(int i=0;i<strlen(c);i++){
        cp[i] = c[strlen(c)-1-i];
    }

    
    for(int i=0;i<strlen(cp);i++){
        if(cp[i]==' '){
            for(int j=i-1;cp[j]!=' ' && j!=-1;j--){
                n[(i-1)-j] = cp[j];
            }

            sum += atoi(n);
            //清空字串
            memset(n,0,strlen(n));
        }

        if(i==strlen(cp)-1){

            for(int j=i;cp[j]!=' ';j--){
                n[i-j] = cp[j];
            }

            sum += atoi(n);
            //清空字串
            memset(n,0,strlen(n));
        }
    }

    printf("%d",sum);
}