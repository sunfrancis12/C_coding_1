#include<stdio.h>
#include<string.h>

int main(){
    char a1[1];

    scanf("%s",a1);

    if(strcmp(a1, "A") ==0 || strcmp(a1, "A") ==0){
        printf("Apple");
    }

    else if(strcmp(a1, "B") ==0 || strcmp(a1, "b") ==0){
        printf("Banana");
    }

    else if(strcmp(a1, "F") ==0 || strcmp(a1, "f") ==0){
        printf("Fish");
    }

    else if(strcmp(a1, "C") ==0 || strcmp(a1, "c") ==0){
        printf("Cherry");
    }

    else if(strcmp(a1, "D") ==0 || strcmp(a1, "d") ==0){
        printf("Durian");
    }

    else if(strcmp(a1, "E") ==0 || strcmp(a1, "e") ==0){
        printf("Egg");
    }

    else{
    printf("Error");
    }

    return 0;

}