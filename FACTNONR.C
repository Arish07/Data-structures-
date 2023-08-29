#include<stdio.h>
int main()
{
int a,i,f=1;
printf("Enter a number ");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
f*=i;
}
printf("factorial of the numbers %d",f);
getch();
clrscr();
return 0;

}