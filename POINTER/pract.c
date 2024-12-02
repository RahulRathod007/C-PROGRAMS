#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3,i,*ptr1,*ptr2,*ptr3,k;
	printf("\n enter a size of array \n");
	scanf("%d",&s1);
	int a[s1];
	ptr1=&s1;
	printf("\n enter a elements of array \n");
	for(i=0;i<s1;i++)
	{
	 	scanf("%d",ptr1[i]);	
	}	
	for(i=0;i,s2;i++)
	{
		scanf("%d",ptr2[i]);
	}
	printf("\n display first array \n");
		for(i=0;i<s1;i++)
		{
		printf("\t%d",ptr1[i]);
		}
	     	printf("\n display second array \n");
			for(i=0;i<s2;i++)
			{
			printf("\t%d",ptr2[i]);
			}
			s3=s1+s2;
			int c[s3];
			k=0;
			ptr3=&c;
		for(i=0;i<s1;i++)
		{
			ptr3=ptr1[i];
			k++;
		}
		for(i=0;i<s2;i++)
		{
			ptr3=ptr2[i];
			k++;
		}
		for(i=0;i<s3;i++)
		{
			printf("%d",ptr3[i]);
		}
			
	}