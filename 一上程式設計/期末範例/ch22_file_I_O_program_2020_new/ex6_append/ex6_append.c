#include<stdio.h>
int main()
{
 FILE *p;
 char fname[20],ch;
 printf("Enter the file name:");
 scanf("%s",fname);
 p=fopen(fname,"a+");             /* opened the file in append/read mode */
 /* Writing onto the file */
 while(1)
 {
   ch=getchar();
   if(ch==-1)
     break;
   fputc(ch,p);
 }
 printf("1 file created...\n");
 getchar();
 printf("\nThe contents of file are..");
 rewind(p);
 /* reading from the file */
 while(1)
 {
   ch=fgetc(p);
   if(ch==-1)
     break;
   printf("%c",ch);
 }
 fclose(p);
 return 0;
}
