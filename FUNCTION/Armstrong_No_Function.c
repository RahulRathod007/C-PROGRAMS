// wap to printf all armstrong no between 1 to n.
#include<stdio.h>
#include<conio.h>

void main()
{
 void arm(int);
 int no;
 printf("\n enter a number \n");
 scanf("%d",&no);
 arm(no);
 getch();
}
void arm(int no)
{
  int count,sum,pro,rem,start=0;
  while(start<=no)
  {
  	int temp=start;
    int count=0;
    int sum=0;
  while (start>0)
  {
  start= start/ 10;
  count++;
  }
  start= temp;
  int j=count;
  while(start>0)
  {     pro=1;
  		count=j;
  		rem=start%10;
  		while(count>0)
  		{
		 pro=pro*rem;
		 count--; 
	    }
	    sum=sum+pro;
	    start=start/10;
	}
		start=temp;
        if(sum==start)
        {
		printf("%d ",sum);
		}
	    start++;
	}
  
}