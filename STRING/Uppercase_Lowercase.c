//convert uppeercase to lowercase and lowercase to uppercase using function.
#include<stdio.h>
#include<conio.h>
void main()
{
  void uppercase(int);
  char ch[90];
  printf("\n enter a input from keyboard \n");
  gets(ch);
  printf("\n before using function %s",ch);
  strupr(ch);
  printf("\n After using Function %s",ch);
  getch();
}

/wap to string convert uppeercase to lowercase and lowercase to uppercase without using function
/*
#include<stdio.h>
#include<conio.h>
void main()
{
  void *get_upper(char []);
  char ch[90];
  printf("\n enter a string from keyboard \n");
  gets(ch);
 char *ptr= get_upper(ch);
  printf("%s",ptr);
}
void *get_upper( char n[])
{
  int count=0;
  while(n[count]!='\0')
  {
    if(n[count]>='a' && n[count]<='z')
    {
	 n[count]=n[count]-32;
	}
	else
	{
	 n[count]=n[count]+32;
	}
	++count;
  }
  return n;
}
*/