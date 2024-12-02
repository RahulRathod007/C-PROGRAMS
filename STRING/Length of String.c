//WAP to find lenght of string using Function
/*
#include<stdio.h>
#include<conio.h>
void main()
{
 char name[90];
 printf("\n Enter a String From Keyboard \n");
 gets(name);
 int l=strlen(name);
 printf("\n Length of String is %d",l);
 getch();
}

*/

//wap to printf lenght of string without using function
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  char ch[90];
  printf("\n enter a string from keyboard \n");
  gets(ch);
  int l=getlength(ch);
  printf("\n Length of string is %d",l);
  getch();
 }
 int getlength(char n[])
 {
  int count =0;
  while(n[count]!=0)
  {
   ++count;
  }
  return count; 
 }
 