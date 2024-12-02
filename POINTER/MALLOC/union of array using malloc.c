// union of array using malloc
// union means print duplicate elements onely one time and print all remaining
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int s1,s2,s3,*ptr1,*ptr2,*ptr3,i,j,k;
 printf("\n enter a size of array 1 \n");
 scanf("%d",&s1);
 printf("\n enter a size of array 2 \n");
 scanf("%d",&s2);
 s3=s1+s2;
 ptr1=(int*)malloc(sizeof(int)*s1);
 ptr2=(int*)malloc(sizeof(int)*s2);
 ptr3=(int*)malloc(sizeof(int)*s3);
 printf("\n enter a elements of array 1 \n");
 for(i=0;i<s1;i++)
 {
  scanf("%d",&ptr1[i]);
 }
 printf("\n enter a elements of array 2 \n");
 for(i=0;i<s2;i++)
 {
   scanf("%d",&ptr2[i]);
 }
 printf("\n Display array 1 --->");
 for(i=0;i<s1;i++)
 {
  printf("\t%d",ptr1[i]);
 }
 printf("\n Display array 2  --->");
 for(i=0;i<s2;i++)
 {
   printf("\t%d",ptr2[i]);
 }
 k=0;
 for(i=0;i<s1;i++)
 {
  ptr3[k]=ptr1[i];
  k++;
 }
 for(i=0;i<s2;i++)
 {
  ptr3[k]=ptr2[i];
  k++;
 }
// printf("\n merged array --->");
// for(i=0;i<s3;i++)
// {
//  printf("\t%d",ptr3[i]);
// }
 printf("\n Union of Array ---> ");
 for(i=0;i<s3;i++)
 {
   for(j=i+1;j<s3;j++)
   {
     if(ptr3[i]==ptr3[j])
     {
	  ptr3[i]=-1;
	 }
   }
   if(ptr3[i]!=-1)
   {
    printf("\t%d",ptr3[i]);
   }
 }
 return 0;
}