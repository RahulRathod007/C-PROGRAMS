#include<stdio.h>
#include<conio.h>
void main()
{
    int end,i=1;
    printf("Enter the end");
    scanf("%d",&end);
    
    while(i<=end)
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
getch();
}
