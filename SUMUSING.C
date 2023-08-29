#include<stdio.h>
int main()
{
int a,i,sum=0;
printf("enter a no to get sum of natural numbers ");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
sum+=i;
}
printf("sum using for loop %d ",sum);
sum=0;
i=0;
while(i<=a)
{
sum+=i;
i++;
}
printf("\nsum using while loop %d ",sum);
sum=0;
i=0;
do
{
sum+=i;
i++;
}
while(i<=a);
printf("\nsum using do while %d ",sum);
getch();
clrscr();
return 0;
}