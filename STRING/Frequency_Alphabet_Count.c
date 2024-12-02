//wap to count afrequency of each alphabet in string 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 void freq(char []); //Declaration
 char ch[90];
 printf("\n Enter a String as Input \n");
 gets(ch);
 freq(ch); //calling
}
void freq(char ch[]) //Defination
{
  int i=0;
  while(ch[i]!='\0')
  {
   int count=1;
   int j=i+1;
   while(ch[j]!='\0')
   {
      if(ch[i]==ch[j])
      {
	   count++;
	   ch[j] =' ';
	  }
	  j++;
   }
   if(ch[i]!=32)
   {
    printf("\n %s = %d ",ch[i],count);
   }
   i++;
  }
}