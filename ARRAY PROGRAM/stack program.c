#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5],i;
 int top=-1,value,max,choice;
 max=sizeof(a)/sizeof(a[0]);
 char ch;
 do { 
      printf("\n 1.Push \n");
      printf("\n 2.Pop \n");
      printf("\n 3.Display \n");
      printf("\n enter your choice \n");
      scanf("%d",&choice);
 switch(choice)
    {
	  case 1:  printf("\n enter a value in stack \n");
	           scanf("%d",&value);
	           if(top==max-1)
	           {
			    printf("\n stack is full \n");
			   }
			   else
			   {
			    top=top+1;
			    a[top]=value;
			   }
			   break;
	  case 2:  if(top==-1)
	           {
			    printf("\n stack is empty \n");
			   }
			   else
			   {
			     value=a[top];
			     top=top-1;
			     printf(" deleted value is %d",value);
			   }
			   break;
	  case 3:  if(top==-1)
	           {
			    printf("\n stack is empty \n");
			   }
			   else
			   {
			    for(i=top;i>=0;i--)
			    {
			     printf("a[%d] ---> %d\n",i,a[i]);
				}
			   }
			   break;
			   default:
			   	printf("\n wrong choice \n");
			   	break;
	}
	printf("\n do you want to continue \n");
	ch=getch();
	} while(ch=='y' || ch=='Y');
	getch();
 }
 