#include<stdio.h>
int main(){

    //我這題寫的他嗎超爛不要看比較好
    //我這題寫的他嗎超爛不要看比較好
    //我這題寫的他嗎超爛不要看比較好
    //我這題寫的他嗎超爛不要看比較好
    //我這題寫的他嗎超爛不要看比較好
    //我這題寫的他嗎超爛不要看比較好
    //我這題寫的他嗎超爛不要看比較好
    char a=0,b=0,c=0,d[100]="";

    int i=0,j=0;

    printf("Enter a first and last name: ");

    while (1){
        scanf("%c",&a);

        if(a==' ' &&j==0){
            j++;
            continue;
        }

        j++;

        if(a>='A' && a<='Z') c = a;

        if(a==' ') break;

    }

    while (b!='\n'){
        scanf("%c",&b);
        d[i] = b;
        i++;
    }

    if(d[i-2] == ' '){
        d[i-2] = ',';
        d[i-1] = '\0';

        printf("%s %c.",d,c);

        return 0;
    }


    d[i-1] = ',';

    printf("%s %c.",d,c);
    
    

}