#include<stdio.h>
int main()
{
 FILE *p;
 char ch;
 p=fopen("igate","r"); /* opening the file in read mode */

 while(1)
 {
   ch=fgetc(p);           /* reading character from the file */
   if(ch==-1)              /* checking end of file */
     break;
   printf("%c",ch);      /* printing character on to the console output */
 }
 fclose(p);                 /* closing the file */
 getchar();
 return 0;
}
