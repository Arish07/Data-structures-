#include<stdio.h>
#include<conio.h>
int main()
{
 int i,in,c,d,d1=0,a[100],n;
 printf("Enter the size of array ");
 scanf("%d",&n);
 printf("Enter elements of array : \n");
 for(i=0;i<n;i++)
  {
   printf("enter elemant %d : ",i+1);
   scanf("%d",&a[i]);
  }
  printf("1) Display array \n2)delete element of array\n3) Insert element to array \n4) Exit");
  printf("Enter your choice : ");
  scanf("%d",&c);
  if(c==1)
   {
    for(i=0;i<n;i++)
     {
      printf("%d\n",a[i]);
     }
    getch();
    clrscr();
   }
   if(c==2)
    {
     printf("Enter a element to delete ");
     scanf("%d",&d);
     for(i=0;a[i]!=d||i<n;i++)
      {
       d1++;
      }
     if(d1<=n)
     {
      for(;d1<n;d1++)
       {
	a[d1]=a[d1+1];
       }
      for(i=0;i<n-1;i++)
       {
	printf("%d",a[i]);
       }
     }
     else
     printf("element not found");
    }
  if(c==3)
   {
    printf("enter a element to insert : ");
    scanf("%d",&in);
    a[n]=in;
    n++;
    for(i=0;i<n;i++)
    printf("%d",a[i]);
   }
  getch();
  clrscr();
  return 0;
}
