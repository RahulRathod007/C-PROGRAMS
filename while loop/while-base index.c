// base into index 
#include<stdio.h>
#include<conio.h>
void main()
{ int base,index,i,p=1;
   printf("\n enter a value of base "); //5
   scanf("%d",&base);
   printf("\nenter value of index"); //3
   scanf("%d",&index);
   i=1;
   while(i<=index)
   { 
   	p=p*base; 
   	i++;
   }
   printf("%d",p);
   getch();
}
   