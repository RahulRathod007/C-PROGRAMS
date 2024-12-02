//wap to count white spaces in string 
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char ch[90];
   printf("\n enter a string as input \n");
   gets(ch);
   printf("\n\n %s ",ch);
   int i=0,count=0;
   while(ch[i]!='\0')
   {
     if(ch[i]==32)
     {
	  count++;
	 }
	 i++;
   }
   printf("\n White Spaces Count is %d",count);
}