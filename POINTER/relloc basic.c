#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int *ptr;
ptr=(int*)malloc(10);
printf("\n now pointer point to %u address \n",ptr);
//ptr=(int*)malloc(5);
//printf("\n now pointer point to %u address \n",ptr);
ptr=(int*)realloc(ptr,5);
printf("\n now poiner point to %u address \n",ptr);
getch();
}