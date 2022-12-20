#include<stdio.h>
#include<string.h>
int main()
{
 FILE *p;
 char x[40];
 p=fopen("fruits","r");
 printf("The names of fruits:\n");
 while(1)
 {
   if(fgets(x,40,p)==NULL)
     break;
   printf("%s",x);
 }
 fclose(p);
 return 0;
}
