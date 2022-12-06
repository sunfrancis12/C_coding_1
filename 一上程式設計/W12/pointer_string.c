#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char *p[100];

    *p = str;

    gets(*p);
    puts(str);
    printf("\n");

    for ( i = p; i < p + sizeof(p); i++){
        printf("%c\n",&i);
    }
    
    
}