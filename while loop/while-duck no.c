#include<stdio.h>
#include<conio.h>
void main()
{ 
  int no,flag=0,rem;
  printf("\n enter a value");
  scanf("%d",&no);
  while(no!=0)
  { 
  rem=no%10;
  no=no/10;
  if(rem==0)
  {
  flag=1;
  break;
  } 
}
  if(flag)
  {
  printf("duck no\n");
  }
  else
  {
  printf("not duck\n");
  }
  getch();
}


