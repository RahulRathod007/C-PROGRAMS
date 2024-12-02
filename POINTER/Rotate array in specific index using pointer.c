// wap to rotate array in n positions using pointer.
#include<stdio.h>
int main()
{
 int i,j,size,pos,*ptr,temp,temp1;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 ptr=&a;
 printf("\n enter a elemets of array \n");
 for(i=0;i<size;i++)
 {
  scanf("%d",(ptr+i));
 } 
 printf("\n Given array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",*(ptr+i));
 }
 printf("\n enter a positon  want to be rotate aaray \n");
 scanf("%d",&pos);
 for(i=0;i<pos;i++)
 {
  temp=*(ptr);
   for(j=0;j<size;j++)
   {
     temp1=*(ptr+j);
     *(ptr+j)=*(ptr+(j+1));
     *(ptr+(j+1))=temp1;
   }
   *(ptr+(j-1))=temp;
   }
   printf("\n Rotate Array\n ");
   for(i=0;i<size;i++)
   {
    printf("\t%d",*(ptr+i));
   }
 return 0;
}
/*
#include<stdio.h>
int main()
{
 int i,size,*ptr,pos;
 printf("\n enter a size of array \n");
 scanf("%d",&size);
 int a[size];
 ptr=&a;
 printf("\n enter a elements of array \n");
 for(i=0;i<size;i++)
 {
 	scanf("%d",(ptr+i));
 }
 printf("\n Given Array ");
 for(i=0;i<size;i++)
 {
  printf("\t%d",*(ptr+i));
 }
 printf("\n enter a position where want to rotate array \n");
 scanf("%d",&pos);
 printf("\n Rotated array \n");
 for(i=pos;i<size;i++)
 {
  printf("\t%d",*(ptr+i));
 }
 for(i=0;i<pos;i++)
 {
  printf("\t%d",*(ptr+i)); 
 }
 
 return 0;
}
*/