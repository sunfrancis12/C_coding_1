#include<stdio.h>
int main(){
    char a='a',c[80]="";
    int n=0,i=0;

    printf("Enter message to be encrypted: ");

     while (a!='\n'){
        scanf("%c",&a);

        c[i] = a;
        i++;
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d",&n);

    while(i>=0){

        if(c[i]>='A'&& c[i]<='Z'){
            c[i] =(((c[i] - 'A') + n) % 26 + 'A');

        }
        else if(c[i]>='a'&& c[i]<='z'){
            c[i] =(((c[i] - 'a') + n) % 26 + 'a');
        }

        i--;
    }

    printf("Encrypted message: %s",c);
}