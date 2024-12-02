//wap to Reverse a string using Function
//strrev function
/*
#include<stdio.h>
#include<conio.h>
void main()
{
 void rev(char []);
 char ch[90];
 printf("\n enter a string from keyboard \n");
 gets(ch);
 printf("\n Before Reverse %s",ch);
 strrev(ch);
 printf("\n After Reverse %s",ch);
 getch();
}
*/

// wap to reverse string without using function
#include<stdio.h>
#include<conio.h>
void main()
{
  char *myrev(char []);
  char ch[90];
  printf("\n input from keyboard \n");
  gets(ch);
  char *ptr=myrev(ch);
  printf("\n %s",ptr);
  getch();
}
char *myrev(char ch[])
{
  int l=strlen(ch);
  int end =(l-1);
  int mid =(l/2);
  for(int start=0;start<mid;start++)
  {
    int temp = ch[start];
    ch[start]=ch[end];
    ch[end]= temp;
    end--;
  }
  return ch;
}