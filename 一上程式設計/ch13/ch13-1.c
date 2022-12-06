#include<stdio.h>
#include<string.h>

int main(){
    char a[100]="",b[100]="",c[100]="";
    gets(a);

    for (int i = 0; i < 100; i++){
        if(a[i]>='a' && a[i]<= 'z'){
            b[i] = a[i]-32; //轉大寫
        }
        else{
            b[i] = a[i];
        }

        if(a[i]>='A' && a[i]<= 'Z'){
            c[i] = a[i]+32; //轉大寫
        }
        else{
            c[i] = a[i];
        }
    }

    puts(b);
    puts(c);
    
}