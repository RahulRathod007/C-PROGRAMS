#include<stdio.h>
int main()
{
int choice,no;
char ch;
do{
printf("\n 1. Reverse Number \n");
printf("\n 2.Count Digit Of Number \n");
printf("\n 3.calculate sum of even and odd Digits\n");
printf("\n 4.swap first two digits and last two digits \n");
printf("\n 5. Enter any Number and reverse middle rather than first and last digit \n");
printf("\n Enter a choice \n");
scanf("%d",&choice);
switch(choice)
{
 case 1: 
          int rev=0,rem=0;
		  printf("\n enter a number");
          scanf("%d",&no);
          while(no!=0)
          {
		   rem=no%10;
		   no=no/10;
		   rev=rev*10+rem;
		  }
		printf("reverse No is %d",rev);
		break;
 case 2: 
         int num,count=0,no;
         printf("enter a number");
         scanf("%d",&no);
         while(no>0)
         {
		  no=no/10;
		  count++;
		 }
		 printf(" count is %d",count);
		 break;
 case 3: 
         int numb,esum=0,i=1,osum;
         printf("\n enter a number ");
         scanf("%d",&numb);
         while(i<=numb)
    { 
         if(i%2==0)
         { 
		  esum = esum + i;
		 // printf("%d \t",i); 
	     } 
		 else 
		 {
		   osum = osum + i;
		 //  printf("%d \t",j);
		 }
		 i++;
		printf(" sum of odd number is %d",osum);
		printf("\n sum of even no is %d \n",esum);
	}
			  
	     break;
}
 ch=getch();
 }while(ch!='q');
 getch();
}