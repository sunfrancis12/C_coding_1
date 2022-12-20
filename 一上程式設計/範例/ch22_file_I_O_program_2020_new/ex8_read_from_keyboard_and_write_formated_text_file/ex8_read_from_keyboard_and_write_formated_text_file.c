#include<stdio.h>
int main()
{
 int pcode,qty,n,i;
 float price,tot;
 char pname[20];
 FILE *p;
 p=fopen("product","w");
 printf("How many products? ");
 scanf("%d",&n);
 printf("Enter the details of %d products:\n",n);
 for(i=1;i<=n;i++)
 {
   printf("\nPcode:");
   scanf("%d",&pcode);
   printf("\nProduct Name:");
   scanf("%s",pname);
   printf("Price:");
   scanf("%f",&price);
   printf("Quantity:");
   scanf("%d",&qty);
   tot=price*qty;
   fprintf(p,"%d\t%s\t%f\t%d\t%f\n",pcode,pname,price,qty,tot);
 }
 printf("1 file created..");
 fclose(p);
 return 0;
}
