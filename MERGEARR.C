#include<stdio.h>
#include<conio.h>
int main()
{
 int n1,i,j,n2,n,c[100],a[100],b[100];
 printf("Enter the size of array a and b ");
 scanf("%d%d",&n1,&n2);
 for(i=0;i<n1;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n2;i++)
 {
  scanf("%d",&b[i]);
 }
 n=n1+n2;
 for(i=0;i<n1;i++)
 {
  c[i]=a[i];
 }
 for(j=0;j<n2;i++,j++)
 {
  c[i]=b[j];
 }
 for(j=0;j<n;j++)
 printf("%d",c[j]);
 getch();
 clrscr();
 return 0;
}