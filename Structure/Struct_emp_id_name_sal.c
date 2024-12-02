//Wap to Create a structure name as Employee with using field id , sal , contact to take input from user and display it.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 struct employe
 {
    int id;
    char name[90];
    long int sal;
 };
 struct employe emp;
  printf("\n Enter a id Name and Salary of Employee \n");
  scanf("%d %s %ld",&emp.id,&emp.name,&emp.sal);
  printf("\n id  is %d ",emp.id);
  printf("\n Name is %s",emp.name);
  printf("\n Sal is %ld",emp.sal);
 getch();
}