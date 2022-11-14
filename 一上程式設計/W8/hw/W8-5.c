#include<stdio.h>
#include<string.h>
int main(){
    char a[100]="",b[100]="";

    printf("Enter first word: ");
    scanf("%s",a);
    printf("Enter second word: ");
    scanf("%s",b);
    
    for (int i = 0; i < strlen(a); i++){
        for(int j=0;j<strlen(b); j++){
            if(a[i]==b[j]){
                a[i] = '*';
                b[j] = '*';
                break;
            }
        }
    }

    for(int i = 0; i < strlen(a); i++){
        if(a[i]!='*' || b[i]!= '*'){
            printf("The words are not anagrams.");
            return 0;
        }
    }

    printf("The words are anagrams.");

    return 0;
    
}