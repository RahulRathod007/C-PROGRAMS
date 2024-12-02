#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int size,*ptr,i,j,flag=0,count,mid;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 ptr=(int*)malloc(sizeof(int)*size);
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
   scanf("%d",&ptr[i]);
 }
 printf("\n Display Array \n");
 for(i=0;i<size;i++)
 {
  printf("\t%d",ptr[i]);
 }
 mid = size /2;
 for(i=0;i<size;i++)
 {   
   count=0;
   for(j=0;j<size;j++)
    { 
	if(ptr[i]==ptr[j])
	  {
	   count++;
	  }
	}
	if(count>mid)
	{
	  flag=1;
	  break;
	}
 }
  if(flag)
  {
   printf("\n Majority Found \n");
  }
  else
  {
    printf("\n Majority Not Found \n");
  }
 return 0;
 }