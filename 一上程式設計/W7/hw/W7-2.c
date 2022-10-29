#include<stdio.h>
int main(){
    char c;
    int a=0;

    printf("Enter a word:");

    while(c!='\n'){
        scanf("%c",&c);
        
        //轉小寫
        if(c<='Z' && c>='A'){
            c +=32;
        }

        if(c=='a' || c=='e' || c=='i' || c=='l' || c=='n' || c=='o' || c=='r' || c=='s'
        || c=='t' || c=='u'){
            a +=1;
        }

        if(c =='d' || c == 'g'){
            a+=2;
        }

        if(c=='b' || c=='c' || c=='m' || c=='p'){
            a+=3;
        }

        if(c=='f' || c=='h' || c=='v' || c=='w' ||c=='y'){
            a+=4;
        }

        if(c=='k'){
            a+=5;
        }

        if(c=='j' || c=='x'){
            a+=8;
        }

        if(c=='q' || c=='z'){
            a+=10;
        }
    }

    printf("\nScrabble value: %d",a);

}