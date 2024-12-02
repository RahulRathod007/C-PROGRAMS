//Write a C program to find maximum and minimum between two numbers using functions. 
#include<stdio.h>
#include<conio.h>
void main()
{
 void max_min(int[]);
 int a[5],i;
 printf("\n enter a elements of array \n");
 for(i=0;i<5;i++)
 {
  scanf("%d",&a[i]);
 }
 max_min(a);
 getch(); 
}
void max_min(int a[5])
{ 
  int max=a[0];
  for(int i =0;i<5;i++)
  {
  	if(a[i]>max)
  	{ 
   		max = a[i];
  	}
  }
  int min = a[0];
  for(int i=0;i<5;i++)
  {
  	if(a[i]<min)
  	{
   	min = a[i];
  	}	
  }
  printf("\n Max is %d",max);
  printf("\n Min is %d",min);
}