//wap to input string from user 
//Note: if we think about scanf() and if we accept the input using scanf() then after space scanf() can not read input.
#include<stdio.h>
#include<conio.h>
void main()
{
 char ch[90];  // string name and size
 printf("\n enter a string \n");
 scanf("%s",&ch);  
 printf("\n String is : %s",ch);
 getch();
}