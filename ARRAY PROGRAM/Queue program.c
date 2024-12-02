	#include<stdio.h>
	#include<conio.h>
	void main(){
	   int q[5],front=0,rear=-1,MAX,i,choice,value;
	   MAX=sizeof(q)/sizeof(q[0]);
	   char ch;
	   do{
	     printf("1:INSERT\n");
	     printf("2:DELETE\n");
	     printf("3:DISPLAY\n");
	     printf("\nEnter your choice\n");
	     scanf("%d",&choice);
   switch(choice)
	{
	case 1:  if(rear==MAX-1)
	         {  
		   		printf("\nQueue is full\n");
	       	 }
	       	else
	       	{
			 rear=rear+1;
			 printf("\nEnter value in queue\n");
			 scanf("%d",&value);
			 q[rear]=value;
			 printf("\nData Stored in Queue\n");
	       }
	       break;
    case 2:	if((front==rear+1) ||(front==0&&rear==-1))
		   { 
			 printf("\nQueue is empty\n");
		   }
		   else
		   {
		    value=q[front];
		    front=front+1;
		    printf("\nDeleted value is %d\n",value);
		   }
	       break;
    case 3:	if((front==rear+1) ||(front==0 && rear==-1))
		    {    
			 printf("Queue is empty");
			}
			else
			{
		     for(i=front; i<=rear;i++)
		     { 
			 printf("q[%d]--->%d\n",i,q[i]);
		     }
			}
	       break;
	       default:
	       printf("\nWrong choice\n");
	}
	    printf("\n do you want to continue \n");
	    ch=getch();
	    }while(ch=='y' ||ch=='Y');
	    getch();
	}
