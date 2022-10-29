#include<stdio.h>
int main(){
    char c;
    float len=0,a=0,w=0;

    printf("Enter a sentence: ");

    while(c!='\n'){
        scanf("%c",&c);
        if(c==' ' || c=='\n'){
            w +=1;
            continue;;
        }
        a +=1;
        if(c==' ') w +=1;
    }

    len = a/w;

    printf("Characters: %.0f\n",a);
    printf("Words: %.0f\n",w);
    printf("Average word length: %.1f",len);

}