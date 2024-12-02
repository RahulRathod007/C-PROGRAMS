#include<stdio.h>
#include<conio.h>
void main()
{
	int size,skey,flag=0;
	printf("\n Enter a size of array");
	scanf("%d",&size);
	int a[size];
	printf("\n Enter values in Array \n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Display Array values  ");
	for(int i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
//	printf("\n enter a search key ");
//	scanf("%d",&skey);
//	for(int i=0;i<size;i++)
//	{
//		if(skey==a[i])
//		{
//				flag =1;
//				break;	
//		}
//	}
//	if(flag==1)
//	{
//		printf("value found");
//	}
//	else
//	{
//		printf("value not found");
//	}
}