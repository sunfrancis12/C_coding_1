#include<stdio.h>
#include<string.h>
int main()
{
 FILE *p;
 char x[40];
 p=fopen("fruits","w"); /* opening file in write mode */
 printf("Enter the names of fruits:\n");
 printf("type \"exit\" to close..\n");
 while(1)
 {
  gets(x);                 /* reading a string from the keyboard */
  if(strcmp(x,"exit")==0)
    break;
  strcat(x,"\n");
  fputs(x,p);             /* writing a string onto the file */
 }
 fclose(p);
 printf("1 file created");
 return 0;
}
