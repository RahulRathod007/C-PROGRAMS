//find  prime numbers using malloc 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int size,*ptr,i,j,count=0;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 ptr=(int*)malloc(sizeof(int)*size);
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",&ptr[i]);
 }
 printf("\n Display Array ");
 for(i=0;i<size;i++)
 {
  printf("%d\t",ptr[i]);
 }
 printf("\n Prime numbers are  ");
 for(i=0;i<size;i++)
 {   count = 0;
   for(j=1;j<=ptr[i];j++)
   {
     if(ptr[i]%j==0)
     {
	    count++; 
	 }
   }
	 if(count==2)
	 {
	  printf("\t%d",ptr[i]);
     }
 }
 return 0;
}
