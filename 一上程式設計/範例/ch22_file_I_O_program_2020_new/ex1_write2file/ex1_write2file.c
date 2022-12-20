#include<stdio.h>
int main()
{
 FILE *p;
 char ch;
 p=fopen("igate.txt","w"); /* opeing file */
 while(1)
 {
  ch=getchar();     /* reading from Console Input */
  if(ch==-1)         /* checking end of file */
                     /* dos mode: Ctrl+z: end of file*/
    break;
  fputc(ch,p);       /* writing on to file */
 }
 fclose(p);             /* closing the file */
 printf("1 file is created..");
 return 0;
}
