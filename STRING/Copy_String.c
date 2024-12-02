//wap to copy string using function 
#include<stdio.h>
#include<conio.h>
void main()
{
  char first[90],second[90];
  printf("\n enter first string \n");
  gets(first);
  printf("\n enter a second string \n");
  gets(second);
  printf("\n Before copy string %s ",first);
  strcpy(first,second);
  printf("\n After copy string %s ",second);
  getch();
}