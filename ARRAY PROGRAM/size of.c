#include<stdio.h>
int main()
{
 int a[5];
 printf("\n size of %d ",sizeof(a));
 printf("\n size of first element %d",sizeof(a[0]));
 printf("\n Address of second element %u",&(a[1]));
 printf("\n Address of third element %u",&(a[2]));
 printf("\n Address of last element %u",&(a[4]));
 return 0;
}