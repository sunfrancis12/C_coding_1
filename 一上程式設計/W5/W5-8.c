#include<stdio.h>
int main(){
    char a1[1];
    scanf("%s",a1);
    printf("\n%s",a1);
    switch (a1){
    case 'A': case 'a':
        printf("Apple");
        break;
    case 'b': case 'B':
        printf("Banana");
        break;
    case 'C': case 'c':
        printf("Cherry");
        break;
    case 'D': case 'd':
        printf("Durian");
        break;
    case 'E': case 'e':
        printf("Egg");
        break;
    case 'F': case 'f':
        printf("Fish");
        break;

    default:
        printf("Error");
        break;
    }
}