#include<stdio.h>
int main(){
    char a[100]="";

    printf("Enter message: ");

    scanf("%s",a);

    
    for (int i = 0; i < 100; i++){
        printf("%c",a[i]);
    }
    printf("\n%s",a);


}