#include<stdio.h>
int main()
{
int fact(int b);
int a;
printf("Enter a numebr ");
scanf("%d",&a);
printf("%d",fact(a));
getch();
clrscr();
return 0;
}
int fact(int b)
{
if(b==0)
return 1;
else
return (b*fact(b-1));
}