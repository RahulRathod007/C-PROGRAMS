// Bank Application program using function
#include<stdio.h>
#include<conio.h>
int b;
int z;
void main()
{
 void deposit(int);
 void withdraw(int);
 void current_bal();
 int c,choice;
 char ch;
 printf("\n enter a current balance \n");
 scanf("%d",&c);
 b = c;
 do{
 printf("\n 1. You want to Deposit Money \n");
 printf("\n 2. You want to Withdraw Money \n");
 printf("\n 3. You want to Check Balace \n");
 printf("\n Enter a choice \n");
 scanf("%d",&choice);
 switch(choice)
{
  case 1: deposit(c);
		  break;
  case 2: withdraw(c);
  		  break;
  case 3: current_bal();
  		  break;
  default : printf("\n invalid input \n");
}
  printf("\n Do you want to continue \n");
  ch=getch();
}
 while(ch=='Y' || ch=='y');
 getch();
}
void deposit(int c)
{
  printf("\n How much money want to be deposit \n");
  scanf("%d",&c);
  b=b+c;
  printf("\n Your Money Deposited !!!! \n");	
}
void withdraw(int c)
{
  printf("\n enter money want to be withdraw \n");
  scanf("%d",&c);
  if(b>c)
  {
  b=b-c;
  printf("\n Your money has been withdraw !!!!\n");
  }
 else
 {
  printf("\n Insufficent balance \n");
 }
}
void current_bal()
{
 printf("'\n Your current Balance is %d",b);
}
