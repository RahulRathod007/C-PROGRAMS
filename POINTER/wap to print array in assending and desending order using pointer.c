//wap program to print array in assending and desending order using pointer.c
#include<Stdio.h>
int main()
{
 int i,j,temp=0,*ptr,size;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 ptr=&a;
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",(ptr+i));
 }
 printf("\nDisplay array   ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",*(ptr+i));
 }
 printf("\nAssending Array ");
 for(i=0;i<size;i++)
 {
   for(j=i+1;j<size;j++)
   {
     if( *(ptr+i)>*(ptr+j) )
     {
	  temp = *(ptr+i);
	  *(ptr+i) = *(ptr+j);
	  *(ptr+j) = temp;
	 }
   }
 }
 
 for(i=0;i<size;i++)
 {
   printf("\t%d",*(ptr+i));
 }
 printf("\nDecending order ");
 for(i=0;i<size;i++)
 {
   for(j=i+1;j<size;j++)
   {
     if( *(ptr+i)<*(ptr+j) )
     {
	  temp = *(ptr+i);
	  *(ptr+i) = *(ptr+j);
	  *(ptr+j) = temp;
	 }
   }
 }
 for(i=0;i<size;i++)
 {
   printf("\t%d",*(ptr+i));
 }
 return 0;
}