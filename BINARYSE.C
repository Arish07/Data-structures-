#include<stdio.h>
int main()
{
int i,a[100],x,l=0,r,m,n;
printf("Enter a number to search : ");
scanf("%d",&x);
printf("Enter a number ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("Enter a number ");
 scanf("%d",&a[i]);
}
n=sizeof(a)/sizeof(a[0]);
r=n-1;
m=(l+r)/2;
while(l<=r)
 {
  m=(l+r)/2;
  if(m==x)
  printf("element is present ");
  else if(x<m)
  r=m;
  else if(x>m)
  l=m;
 }
 getch();
 clrscr();
 return 0;
}