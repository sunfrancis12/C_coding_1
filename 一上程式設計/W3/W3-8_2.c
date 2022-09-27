#include <stdio.h>

int main(void)
{
  int a,c,d,e;
float b;

scanf("%d", &a);
scanf("%f", &b);
scanf("%d/%d/%d",&c,&d,&e);

printf("Item            Unit            Purchase\n");
printf("                Price           Date\n");
if(c>10&&d>10 )printf("%d             $%.2f          %d/%d/%d",a,b,c,d,e);
else if(c>10&&d<10)printf("%d             $%.2f          %d/0%d/%d",a,b,c,d,e);
else if(c<10&&d>10)printf("%d             $%.2f          0%d/%d/%d",a,b,c,d,e);
else printf("%d             $%.2f          0%d/0%d/%d",a,b,c,d,e);
 
  return 0;
}