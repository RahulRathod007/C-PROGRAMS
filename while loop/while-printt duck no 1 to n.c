// printf duck no 1 to n
#include<stdio.h>
#include<conio.h>
void main()
{
 int no,i,rem,flag=0,temp,j=1;
 printf("\n enter  a value of no");
 scanf("%d",&no);
 while(i<=no)
 {
   flag=0;
   j=i;
   while(j!=0)
 {
  rem=j%10;
  j=j/10;
  if(rem==0)
  {
   flag =1;
   break;
  }
 }
 if(flag)
 {
  printf("%d\n",i);
 }
 i++;

 }
 getch();
}
 