#include<stdio.h>
int main(){
    int m,d,y;

    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&m,&d,&y);

    printf("You entered the date %d",y);

    if(m>=10) printf("%d",m);
    else printf("0%d",m);

    if(d>=10) printf("%d",d);
    else printf("0%d",d);


    return 0;
}