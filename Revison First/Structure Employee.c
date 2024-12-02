#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	struct Employee
	{
		int id;
		long int sal;
		char name[90];
	};
	struct Employee emp;
	printf("\n Enter Id Sal And Name \n");
	scanf("%d %ld %s",&emp.id,&emp.sal,&emp.name);
	printf(" Name is : %s\n",emp.name);
	printf(" id is : %d\n",emp.id);
	printf(" salary is : %ld",emp.sal);
}