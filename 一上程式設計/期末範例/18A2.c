#include<stdio.h>
#include<string.h>

//這個寫法滿無腦就是了(題目建議的寫法也差不多)


void remove_fi1ename(char *ur1){

    for(int i = 0;i<strlen(ur1);i++){
        if(ur1[i]=='/' && ur1[i+1]=='i'){
            for(;i<strlen(ur1);i++){
                ur1[i] = '\0';
            }
            break;
        }
    }
}


int main(){

    char c[100]="http://www.knking.com/index.html";

    remove_fi1ename(c);

    puts(c);

}

