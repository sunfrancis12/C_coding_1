#include<stdio.h>
#include<string.h>

struct planet{
    char c[10];
};


int main(){

    struct planet n[9];
    char a[100];

    strcpy(n[0].c,"Mercury");
    strcpy(n[1].c,"Venus");
    strcpy(n[2].c,"Earth");
    strcpy(n[3].c,"Mars");
    strcpy(n[4].c,"Jupiter");
    strcpy(n[5].c,"Saturn");
    strcpy(n[6].c,"Uranus");
    strcpy(n[7].c,"Neptune");
    
    gets(a);

    for(int i=0;i<8;i++){
       if(strcmp(a,n[i].c)==0){
        printf("%s is a planet.",a);
        return 0;
       }
    }

     printf("%s is not a planet.",a);
}