//wap to input an array using malloc pointer and dislay it.
#include<stdio.h>
#include<conio.h>
void main()
{
	int *ptr,size;
	printf("\n enter size of array");
	scanf("%d",&size);
	ptr=(int*)malloc(sizeof(int)*size);
	printf("enter values in array");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<size;i++)
	{
		printf("%d\t",ptr[i]);
	}
}