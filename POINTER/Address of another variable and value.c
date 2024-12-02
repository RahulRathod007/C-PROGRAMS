#include<stdio.h>
int main()
{
 int a=100,*ptr;
 ptr=&a;
 printf("\n Address of A %u ",&a);
 printf("\n Value of ptr %u ",ptr);
 printf("\n Value of using ptr %d",*ptr);
 ptr++;
 printf("\n now pointer shift on %u block",ptr);
 *ptr=500;
 printf("\n now value of new block %d",*ptr);
 ptr++; 
 printf("\n now pointer shift on %u block",ptr);
 ptr=ptr-2;
 printf("\n now pointer shift on previous %u block ",ptr);
 return 0;
}
