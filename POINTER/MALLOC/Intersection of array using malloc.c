// intersection of array using malloc
// intersection means printf all Duplicate elemetns from both array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int s1,s2,*ptr1,*ptr2,*ptr3,i,j,k,flag;
 printf("\n enter a size of first array \n");
 scanf("%d",&s1);
 printf("\nsize of second array \n");
 scanf("%d",&s2);
 ptr1=(int*)malloc(sizeof(int)*s1);
 ptr2=(int*)malloc(sizeof(int)*s2);
 ptr3=(int*)malloc(sizeof(int)*s1+s2);
 printf("\n enter a elements of first array \n");
 for(i=0;i<s1;i++)
 {
  scanf("%d",&ptr1[i]);
 }
 printf("\n enter a elements of second array \n");
 for(i=0;i<s2;i++)
 {
  scanf("%d",&ptr2[i]);
 }
 printf("\n Display elemetns of first array \n");
 for(i=0;i<s1;i++)
 {
  printf("\t%d",ptr1[i]);
 }
 printf("\n Display elements of second array \n");
 for(i=0;i<s2;i++)
 {
  printf("\t%d",ptr2[i]);
 }
 k=0; //merge 
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
 printf("\n merged array \n");
 for(i=0;i<s1+s2;i++)
 {
  printf("\t%d",ptr3[i]);
 }
 printf("\n intersection of array \n"); // intersection
 for(i=0;i<s1+s2;i++)
 { flag=0;
   for(j=i+1;j<s1+s2;j++)
   {
    if(ptr3[i]==ptr3[j])
    {
    flag=1;
    ptr3[j]=-1;
	}
   }
 if(flag&&ptr3[i]!=-1)
 {
  printf("\t%d",ptr3[i]);
 }
}
 return 0;
}