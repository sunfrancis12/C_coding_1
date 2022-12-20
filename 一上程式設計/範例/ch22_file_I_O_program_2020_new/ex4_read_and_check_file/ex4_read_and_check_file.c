#include<stdio.h>
int main()
{
 FILE *p;
 char fname[20],ch;
 printf("Enter the file name:");
 scanf("%s",fname);
 p=fopen(fname,"r");
 if(p==NULL)
   printf("Sorry..file is not existed..");
 else
 {
   while(1)
   {
    ch=fgetc(p);
    if(ch==-1)
      break;
    printf("%c",ch);
   }
   fclose(p);
 }
 return 0;
}
