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
  struct employee *emp;
  printf("\n Enter a Id Name And Salary of Employee \n");
  scanf("%d%s%d",&emp->id,&emp->name,&emp->sal);
  printf("\n Id %d",emp->id);
  printf("\n Name %s",emp->name);
  printf("\n Sal %d",emp->sal);
  getch();
}