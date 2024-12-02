#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
int *ptr,nplate,osplate,eplate,rmanp,emanp,i;
printf("\nEnter number of plate\n");
scanf("%d",&nplate);
rmanp=nplate/10;
ptr=(int*)malloc(sizeof(int)*rmanp);
printf("\nenter code of employee\n");
for(i=0; i<rmanp;i++)
{
  scanf("%d",&ptr[i]);
}
printf("\nEnter on spot plate\n");
scanf("%d",&osplate);
if(osplate>nplate)
{
 eplate=osplate-nplate;
 emanp=eplate/10;
 ptr=(int*)realloc(ptr,sizeof(int)*emanp);
 printf("\nenter code for new employee\n");
 for(i=rmanp;i<(rmanp+emanp);i++)
{  
scanf("%d",&ptr[i]);  
}
printf("\nDisplay all employees\n");
for(i=0; i<(rmanp+emanp); i++)
{ 
printf("%d\t",ptr[i]);
}
}
getch();
	}
