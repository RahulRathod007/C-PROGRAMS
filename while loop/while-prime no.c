#include<stdio.h>
int main()
{
    int end,i=1,count=0,j=1;
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
}
