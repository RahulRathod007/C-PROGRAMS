// write a program to print table between 2 to 10
#include<stdio.h>
#include<conio.h>
//#include<dos.h>
void main()
{
 int i,j;
 for(i=1 ; i<=10 ; i++)
 { 
   for(j=2 ; j<=10 ; j++)
   { 
     printf("%d\t",i*j);
	 //delay(100); 
   }
   printf("\n");
}
getch();
}