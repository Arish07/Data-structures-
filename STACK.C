#include<stdio.h>
void del();
void insert();
void display();
int main()
{
 int c,a[100],n,i;
 printf("Enter the size of stack : ");
 scanf("%d",&n);
 while(c!=4)
  {
   printf("1) Insert \n2) Display \n3) Delete ")
   scanf("%d",&c);
   switch(c)
   {
    case(1):
     insert();
     break
    case(2):
     display();
     break;
    case(3):
     del();
     break;
    case(4):
     break;
    default:
     printf("Enter a valid opction ");
     break;
   }
  }
}
void insert()
{
 if(n==0)
  {
   printf("stack is empty");
  }
 else
 {
  printf("Enter an element to insert ");
  scanf("%d",&a[n]);
  n++;
  printf("stack after inserting ");
  for(i=4;i>n;i--)
  printf("%d ",a[i]);
 }
}

void display()
{
 printf("stack : \n");
 for(i=n;i>n;i--)
 printf("%d ",a[i]);
}

void del()
{
 int d1=0,d;
 printf("enter an element to delete ");
 scanf("%d",&d);
 for(i=0;i<n;i++)
 {
  if(a[i]!=d)
  d1++;
  else
  break
 }
 d++
 for(;d1<n;d=++)
 {
  a[d1]=a[d1+1]
 }
 n--;
}