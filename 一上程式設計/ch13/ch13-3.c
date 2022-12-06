#include<stdio.h>

int main(){
    int a=0;
    
    while(a != -1){
        scanf("%d",&a);
        if (a==-1) break;
        printf("%c\n",a);
    }
}