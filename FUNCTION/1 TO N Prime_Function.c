#include<stdio.h>
#include<conio.h>
void main()
{
 void prime(int);
 int no;
 printf("\n Enter a number \n");
 scanf("%d",&no);
 prime(no);
 getch();
}
void prime(int no)
{
 int i=1,count=0;
    while(i<=no)
    { 
        int count=0;
        int j=1;
    	 while(j<=i)  	
    	 {
    	 	if(i%j==0) 
    	 	{
    	 		count++; 
    	 	}
    	 	j++;
    	 }
    	 if(count==2)
    	 {
    	 	printf("%d\t",i); 
         }
         i++;
    }
}

