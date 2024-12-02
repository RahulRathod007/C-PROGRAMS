//Wap to Concatinate String using Function 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	
  char first[90],second[90];
  printf("\n enter a first string \n");
  gets(first);
  printf("\n enter a second string \n");
  gets(second);
  printf("\n Before a Concatination %s\n",first);
  strcat(first,second);
  printf("\n After a Concationation %s\n",first);
  getch();
}
/*
// wap to concatination of string without using string
	#include<stdio.h>
	#include<conio.h>
	#include<string.h>
	void main()
	{  clrscr();
	   char first[90],second[90];
	   char * myConcat(char[],char[]);
	   char *result;
	   printf("\nEnter first string\n");
	   gets(first);
	   printf("\nenter second string\n");
	   gets(second);
	   printf("\nBefore concat %s\n",first);
	   result=myConcat(first,second);
	   printf("\nAfter concat %s\n",result);
	   getch();
	}
	char * myConcat(char f[],char s[])
	{  int len=strlen(f);
	   int count=0;
	   while(s[count]!='\0')
	   {  f[len]=s[count];
	     ++len;
	     ++count;
	   }
	   f[len]='\0';
	   return f;
	}
*/