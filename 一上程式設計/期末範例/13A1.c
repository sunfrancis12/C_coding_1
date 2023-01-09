#include<stdio.h>
#include<string.h>


void build_index_url(const char *domain, char *index_url){

    char c[100]= "http://www.";
    strcat(c,domain);
    strcat(c,"/index.html");  
    strcpy(index_url,c);

}


int main(){

    char c[100],ans[100];

    gets(c);

    build_index_url(c,ans);

    puts(ans);

}

