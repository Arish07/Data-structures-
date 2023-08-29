#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
if(a<b)
printf("%d is greater than %d",b,a);
else
printf("%d is greater than %d",a,b);
getch();
clrscr();
return 0;
}