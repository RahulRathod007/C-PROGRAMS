//wap to compare string equal or not using a function
//strcmp function
/*
#include<stdio.h>
#include<conio.h>
void main()
{
 char first[90] ,second[90];
 int result;
 printf("\n enter a first string \n");
 gets(first);
 printf("\n enter a second string \n");
 gets(second); 
 result = strcmp(first,second);
 if(result==0)
 {
 printf("\n String are Equal \n");
 }
  else
  {
   printf("\n String are Not equal \n");
  }
  getch();
}
*/

 #include<stdio.h>
 #include<conio.h>
 void main()
{
 int mystring(char[] ,char[]);	
 char first[90] ,second[90];
 int result;
 printf("\n enter a first string \n");
 gets(first);
 printf("\n enter a second string \n");
 gets(second); 
 result = strcmp(first,second);
 if(result==0)
 {
 printf("\n String are Equal \n");
 }
  else
  {
   printf("\n String are Not equal \n");
  }
  getch();
}
int mystring(char f[],char s[])
{
  int flen =strlen(f);
  int slen =strlen(s);
  if(flen!=slen)
  {
   return -1;
  }
  else
  {
    int flag=0,count=0;
    while(f[count]!='\0')
    {
	 int diff=f[count]-s[count];
	 if(diff!=0)
	 {
	  flag=diff;
	  break;
	 }
	 ++count;
}
 return flag;
 }
}
