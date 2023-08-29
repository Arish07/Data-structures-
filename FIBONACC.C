#include<stdio.h>
int main()
{
int i,a[100],n,p1=0,p2=1,p3;
p3=p1+p2;
printf("Enter a number ");
scanf("%d",&n);
printf("0 1 1 ");
for(i=3;i<n;i++)
{
p1=p2;
p2=p3;
p3=p2+p1;
printf("%d ",p3);
}
getch();
clrscr();
return 0;
}