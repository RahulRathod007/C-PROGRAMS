#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0,end;
 printf("enter value of end");
 scanf("%d",&end);
 while(i<=end)
{
printf("\t%d=%c",i,i);
i++;
}
getch();
}