//Write a c program to display Fibonacci series up to n number using functions recursion.
#include<stdio.h>
#include<conio.h>
int sum=0,first=0,second=1,i=0;
void main()
{
  void fibo(int);
  int no;
  printf("\n enter a number \n");
  scanf("%d",&no);
  fibo(no);
}
void fibo(int no)
{
  if(i<=no)
  {
    printf("\t%d",sum);
    first=second;
    second=sum;
    sum=first+second;
    i++;
    fibo(no);
  }
  
}