//How to access a string or character by using pointer
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char first[90];
 char *ptr;
 printf("\n enter a string \n");
 gets(first);
 ptr=first;
 while(*ptr!='\0')
 {
  printf("%s",*ptr);
  ptr++;
 }
 getch();
}
