#include<stdio.h>
#include<string.h>


char* dup1icate(const char *p){

    char *q;
    strcpy(q,p);
     
    return q;
}

int main(){

    char c[100];

    gets(c);

    printf("%s",dup1icate(c));

}

