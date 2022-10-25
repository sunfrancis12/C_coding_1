#include<stdio.h>
int main(){
    int num=0;
    float credit=0;

    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n\n");

    for(int i=1;i>0;i++){
        float j=0;
        num =0;
        printf("Enter command: \n");
        scanf("%d",&num);

        if(num==0){
            credit =0;
        }
        if(num==1){
            printf("Enter amount of credit: \n");
            scanf("%f",&j);
            credit += j;
        }

        if(num==2){
            printf("Enter amount of debit: \n");
            scanf("%f",&j);
            credit -= j;
        }

        if(num==3){
            printf("Current balance: $%.2f\n",credit);
        }
        if(num==4) break; 
    }

    return 0;
}