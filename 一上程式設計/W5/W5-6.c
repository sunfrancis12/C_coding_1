#include<stdio.h>
int main(){
    int num=0,hour=0,min=0;
    scanf("%d",&num);

    hour = num/60;
    min = num%60;

    if(num==0) printf("AM:twelve");

    else if(num==1440) printf("AM:twelve");

    else if(hour<12){
        printf("AM:");

        switch(hour){
            case 1: printf("one"); break;
            case 2: printf("two"); break;
            case 3: printf("three"); break;
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine"); break;
            case 10: printf("ten"); break;
            case 11: printf("eleven"); break;
        }
    }

    else if(hour>=12){
        printf("PM:");

        switch(hour-12){
            case 1: printf("one"); break; 
            case 2: printf("two"); break;
            case 3: printf("three"); break;
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine"); break;
            case 10: printf("ten"); break;
            case 11: printf("eleven"); break;
            case 12: printf("twelve"); break;
        }
    }


    printf(":%d",min);


}