#include<stdio.h>
int main(){
    float price;
    int m,d,y,num;

    
    scanf("%d",&num);
    scanf("%f",&price);
    scanf("%d/%d/%d",&m,&d,&y);
    

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");

    printf("%-7d\t$%7.2f\t",num,price);

    if(m>=10) printf("%d/",m);
    else printf("0%d/",m);

    if(d>=10) printf("%d/",d);
    else printf("0%d/",d);

    printf("%d",y);

    return 0;
}