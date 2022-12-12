#include<stdio.h> 
int main() 
{ 
short x=45,y=52; 
short d1=41,d2=42,d3=43,d4=44;
short *p1,*p2,*p3,*p4;
p1=&d1;
p2=&d2;
p3=&d3;
p4=&d4;

printf("x=%d",x);
printf("\ny=%d",y); 
printf("\nAddress of x %u",&x); 
printf("\nAddress of y %u",&y); 
printf("\nAddress of d1 %u",&d1);
printf("\nAddress of d2 %u",&d2); 
printf("\nAddress of d3 %u",&d3); 
printf("\nAddress of d4 %u",&d4); 

printf("\n--------- print Address of d1-d4"); 
printf("\nAddress of p1 %u",&p1);
printf("\nAddress of p2 %u",&p2); 
printf("\nAddress of p3 %u",&p3); 
printf("\nAddress of p4 %u",&p4); 

printf("\n--------- print value(address variable) of p1- p4"); 
printf("\nValue(address variable)  of p1 %u",p1);
printf("\nValue(address variable)  of p2 %u",p2); 
printf("\nValue(address variable)  of p3 %u",p3); 
printf("\nValue(address variable)  of p4 %u",p4);  

printf("\n--------- print value of *p1-*p4"); 
printf("\nValue of *p1 %u",*p1);
printf("\nValue of *p2 %u",*p2); 
printf("\nValue of *p3 %u",*p3); 
printf("\nValue of *p4 %u",*p4);  
return 0; 
} 
