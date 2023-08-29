#include<stdio.h>
int main()
{
int n,a[100],i;
printf("enter the total length");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter number %d ",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
printf("\n%d is a even number ",a[i]);
else
printf("\n%d is a odd number ",a[i]);
}
getch();
clrscr();
return 0;
}