#include<stdio.h>
int main(){
    int hr=-1,min=-1;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hr,&min);

    if(hr==0 && min>=0 && min<60) printf("Equivalent 12-hour time: 12:%.2d AM",min);
    
    else if(hr==12 && min>=0 && min<60) printf("Equivalent 12-hour time: 12:%.2d PM",min);

    else if(hr>=0 &&hr<12 && min>=0 && min<60) 
        printf("Equivalent 12-hour time: %d:%.2d AM",hr, min);

    else if(hr>=12 && hr<24 && min>=0 && min<60) 
        printf("Equivalent 12-hour time: %d:%.2d PM",hr-12, min);
    
    else printf("Not the correct time format");

    return 0;
}