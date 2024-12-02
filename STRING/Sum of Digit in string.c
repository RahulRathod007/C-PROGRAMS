//wap to sum of digits in string
#include<stdio.h>
#include<conio.h>
void main()
{
  void mystring(char []);
  char ch[90];
  printf("\n enter a input from keyboard \n");
  gets(ch);
  int i=0,sum=0;
  while(ch[i]!='\0')
  {
   if(ch[i]>=48 && ch[i]<=57)
   {
    sum = sum + (ch[i]-48);
   }
   i++;
  }
  printf("\n sum of Digit is %d",sum);
  getch();
}