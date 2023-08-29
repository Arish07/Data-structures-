#include<stdio.h>
#include<conio.h>
int main()
{
 int a[100],n,i,j;
 printf("Enter a size :");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=i+1;j<n;j++)
  {
  if(a[i]==a[j])
  {
   printf("%d ",a[i]);
  }
  }
  printf("is repeating");

 }
 getch();
 clrscr();
 return 0;
}
