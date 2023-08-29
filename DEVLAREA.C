#include<stdio.h>
int main()
{
 int a[100];
 printf("Enter total number of elements needed ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Enter element %d",i+1);
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  printf("Element %d : %d",i+1,a[i]);
 }
 getch();
 clrscr();
 return 0;
}