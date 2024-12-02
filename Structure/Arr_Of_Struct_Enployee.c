//wap to create Struct As Name Enployee Display Its id name and salary using Array of Structure.
#include<stdio.h>
#include<conio.h>
#include<string.h>

 struct employee
 {
   int id;
   char name[90];
   int sal;
 };
 void main()
{
 struct employee emp[5];
 for(int i=0;i<5;i++)
 {
 	//_flushall();
 	printf("\n enter a ID , Name , Salaray of Employee \n");
   scanf("%d%s%d",&emp[i].id,&emp[i].name,&emp[i].sal);
 } 
 printf("\n Display Empoyee \n");
 for(int i=0;i<5;i++)
 {
  printf("\n ID %d\t NAME %s\t Sal %d\t",emp[i].id,emp[i].name,emp[i].sal);
 }
 getch();
}