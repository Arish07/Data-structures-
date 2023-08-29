#include<stdio.h>
int main()
{
int i,j,k,sum=0,m,n,p,q,a[100][100],b[100][100],c[100][100];
printf("Enter rows and columns of matrix one");
scanf("%d%d",&m,&n);
printf("Enter rows and columns of matrix two ");
scanf("%d%d",&p,&q);
if(n==p)
{
 printf("enter elements of matrix one");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Enter elemants of matrix two");
 for(i=0;i<p;i++)
 {
  for(j=0;j<q;j++)
  {
  scanf("%d",&b[i][j]);
  }
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<q;j++)
  {
   sum=0;
   for(k=0;k<n;k++)
   {
    sum+=a[i][k]*b[k][j];
   }
   printf("\n%d",sum);
   c[i][j]=sum;
  }
 }
 printf("multiplied matrix \n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<q;j++)
   {
   printf("%d\t",c[i][j]);
   }
  printf("\n");
  printf("%d %d %d %d",c[0][0],c[0][1],c[1][0],c[1][1]);
 printf("finish");
// getch();
// clrscr();
}
}
else
{
 printf("matrix cannot be multiplied");
 getch();
}
return 0;
}
