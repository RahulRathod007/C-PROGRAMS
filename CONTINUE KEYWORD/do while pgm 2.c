#include<stdio.h>
#include<conio.h>
void main()
{ 
 char ch;
 int choice;
 int end,i=1;
 do{
 	printf("\n 1.Displat 1 to n prime number \n");
 	printf("\n 2.Display the 1 to n Perfect number \n");
 	printf("\n 3.Display the 1 to n Duck number \n");
 	printf("\n 4.Display the 1 to n Strong number \n");
	printf("\n 5.Display the 1 to n Armstrong number \n"); 
	printf("\n enter a choice \n ");
	scanf("%d",&choice);
 switch(choice)
 {
  case 1:  
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
            break;
}
printf("\n you want to perform again or no");
scanf("%c",&ch);
ch=getch();  
}while(ch=='y' || ch=='Y');
getch();
}