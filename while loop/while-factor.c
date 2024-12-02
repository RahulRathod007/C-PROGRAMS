#include<stdio.h>
//find  all factors of number 
#include<conio.h>
void main()
{
int no,i;
printf("enter a no ");
scanf("%d",&no);
i=1;
while(i<=no)
{ 
if(no%i==0)
{
printf("\n%d\n",i);
}
i++;
}
getch();
}

