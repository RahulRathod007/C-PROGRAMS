//wap to find perfect number using function.
#include<stdio.h>
#include<conio.h>
void main()
{
 void perfect(int);
 int no;
 printf("\n enter a number \n");
 scanf("%d",&no);
 perfect(no);
 getch();
}
void perfect(int no)
{
  int i=1,sum=0;
  while(i<no)
  {
     if(no%i==0)
    {
      sum = sum + i;
    }
    i++;
  }
  if(sum == no)
  {
   printf("\n Perfect no \n");
  }
  else
  {
   printf("\n Not Perfect \n");
  }
}