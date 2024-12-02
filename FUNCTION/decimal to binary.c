//decimal to binary using a function
#include<stdio.h>
#include<conio.h>
void main()
{
 void to_binary(int no[],int);
 int a[8]={0,0,0,0,0,0,0,0},no;
 printf("\n enter a elements of array \n");
 scanf("%d",&no);
 to_binary(a,no);
}
void to_binary(int a[8],int no)
{
  for(int i=0;i<8;i++)
  {
   while(no!=0)
   {
      a[i]=no%2;
      no=no/2;
      i++;
   }
  }
  for(int i=7;i>=0;i--)
  {
   printf("%d",a[i]);
  }
}