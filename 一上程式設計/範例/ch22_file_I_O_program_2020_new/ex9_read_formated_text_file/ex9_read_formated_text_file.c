#include<stdio.h>
int main()
{
 int pcode,qty;
 float price,tot,bill=0;
 char pname[20];
 FILE *p;
 p=fopen("product","r");
 printf("               Bill\n");
 printf("---------------------------------------\n");
 while(1)
 {
   fscanf(p,"%d%s%f%d%f",&pcode,pname,&price,&qty,&tot);
   if(feof(p))
     break;
   printf("%d\t%s\t%f\t%d\t%f\n",pcode,pname,price,qty,tot);
   bill=bill+tot;
 }
 printf("               Toal Bill: %f",bill);
 fclose(p);
 return 0;
}
