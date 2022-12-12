/* life of external variables */
#include<stdio.h>

int x=10;       /* external variable */
void display();
int main(void)
{
 display();
 display();
 display();
 x=x+100;
 display();
 return 0;
}

void display()
{
 x=x+10;
 printf("\n%d",x);

}
