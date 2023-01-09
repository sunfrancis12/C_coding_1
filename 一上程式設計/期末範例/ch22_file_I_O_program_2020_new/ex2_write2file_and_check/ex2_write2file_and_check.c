#include<stdio.h>
int main()
{
 FILE *p;
 char fname[20],ch;
 printf("Give the file name:");
 scanf("%s",fname);
 p=fopen(fname,"r");   /* opening file in read mode */
 if(p==NULL)               /* if file is not existed         */
 {
   fclose(p);                 /* closing file stream in read mode */
   p=fopen(fname,"w"); /* opening file in write mode*/
   while(1)
   {
     ch=getchar();     /* reading from Console Input */
     if(ch==-1)         /* checking end of file */
       break;
     fputc(ch,p);       /* writing on to file */
   }
   fclose(p);
   printf("1 file is created..");
 }
 else                             /* if file is already existed */
 {
  printf("File is already existed..");
  printf("\nTry with other name..");
  fclose(p);
 }
 return 0;
}
