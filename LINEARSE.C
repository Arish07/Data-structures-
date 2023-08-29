#include<stdio.h>
int main()
{
int i,a[100],n,s,pos=1,count=0;
printf("Enter total numbers in the array ");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
printf("Enter element to search : ");
scanf("%d",&s);
for(i=0;i<n;i++)
 {
  if(a[i]==s)
  {
   count++;
   break;
  }
  pos++;
  printf("%d",pos);
 }
 if(count==0)
 printf("Element not found");
 else
 printf("Element was found in %d position ",pos);
 getch();
 clrscr();
 return 0;
}