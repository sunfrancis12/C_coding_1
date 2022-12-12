#include<stdio.h>
#include<string.h>
int main(){
    char a='a',b[100]="",c[100]="";
    int i=0,k=0,z=0;

    while (a!='\n'){
        scanf("%c",&a);
        b[i] = a;
        i++;
    }

    b[i-1] = '\0';

    for (int j = i-2; j >=0; j--){
        c[k] = b[j];
        k++;
    }

    puts(c);
    printf("\n");
    
    for (int j = 1; j <=k; j++){
        if(c[j]==' '|| j==k){
            z=j-1;
            while(c[z]!=' ' &&z>0 ){
                printf("%c",c[z]);
                z--;
            }
            if(j==k) break;
            printf(" ");
        }
    }

    printf("%c",c[0]);
    
    

}