#include<stdio.h>
int main()
{
 char sfname[20],tfname[20];
 char ch;
 FILE *s,*t;
 printf("Enter the source file name:");
 scanf("%s",sfname);
 printf("Enter the target file name:");
 scanf("%s",tfname);
 s=fopen(sfname,"r");        /* opening source file read mode */
 t=fopen(tfname,"w+");     /* opening target file in write/read mode */
 /* copying from source to target */
 while(1)
 {
  ch=fgetc(s);
  if(ch==-1)
    break;
  fputc(ch,t);
}
fclose(s);
printf("1 file copied..\n\n");
getchar();
printf("Contents of target file...");
rewind(t);
/* reading from target file */
while(1)
{
 ch=fgetc(t);
 if(ch==-1)
   break;
 printf("%c",ch);
}
fclose(t);
return 0;
}
