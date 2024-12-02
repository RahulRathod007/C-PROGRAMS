//wap convert binary to decimal using function.
#include<stdio.h>
#include<conio.h>
void main()
{
 void to_decimal(int no[]);
 int no[5],i;
 printf("\n enter a number of array \n");
 for(i=0;i<5;i++)
 {
   scanf("%d",&no[i]);
 }
 to_decimal(no); 
 getch();
}
void to_decimal(int a[])
{
 	int count=0,sum=0,i,rem,p;
 	for(i=0;i<5;i++)
 	{
 		sum =0;
 		count=0;
 		while(a[i]!=0)
	 	{	
    		rem = a[i]%10;
    		a[i]=a[i]/10;
    		p=pow(2,count);
    		count++;
    		sum=sum+rem*p;
 		}
 		printf("%d\t",sum);
	}
}