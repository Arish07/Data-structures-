#include<stdio.h>
#include<conio.h>
int main()
{
 int i,o,rem=0,q=0;
 printf("enter a number ");
 scanf("%d",&i);
 while(i!=0)
 {
  rem=i%10;
  q=q*10 + rem;
  i=i/10;
 }
 printf("after reverse %d",q);
 getch();
 clrscr();
 return 0;
}