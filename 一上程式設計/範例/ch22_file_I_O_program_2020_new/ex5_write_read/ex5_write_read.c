#include<stdio.h>
int main()
{
 FILE *p;
 char fname[20],ch;
 printf("Enter the file name:");
 scanf("%s",fname);
 p=fopen(fname,"w+"); /* opening the file write/read mode */
 /* writing onto the file */
 while(1)
 {
   ch=getchar();
   if(ch==-1)
     break;
   fputc(ch,p);
 }
 printf("1 file created...");
 printf("Please Press Enter to exit....");
 getchar();
 printf("The contents of file are..");
 rewind(p);               /* sending active position to the beginning of file */
 /* reading from the file */
 while(1)
 {
   ch=fgetc(p);
   if(ch==-1)
     break;
   printf("%c",ch);
 }
 fclose(p);
  printf("Please Press Enter to exit....");
  getchar();
 return 0;
}
