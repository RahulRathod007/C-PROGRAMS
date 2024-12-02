// wap to convert any digit number int morse code.
#include<stdio.h>
#include<conio.h>
void main()
{
 void to_morse(int);
 int num;
 printf("\n enter a number\n");
 scanf("%d",&num);
 to_morse(num);
 getch();
}
void to_morse(n)
{
 int rev,rem,num,rem2;
 rem = num%10;
 num = num/10;
 rev = rev*10+rem;

while(rev!=0)
{
 rem2 = rev %10;
 rev  = rev /10;
 
 switch(rem2)
 {
   case 0: printf("----- ");
      	   break;
      	   
   case 1: printf(".---- ");
   		   break;
   		   
   case 2: printf("..--- ");
           break;
           
   case 3: printf("...-- ");
           break;
           
   case 4: printf("....- ");
           break;
           
   case 5: printf("..... ");
           break;
           
   case 6: printf("-.... ");
   		   break;
   		   
   case 7: printf("--..." );
   		   break;
   		   
   case 8: printf("---.." );
           break;
           
   case 9: printf("----." );
 }
}
}