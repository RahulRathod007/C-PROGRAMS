//write a string into the text file 
#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *ptr;
 char ch[90];
  ptr=fopen("G:\\C PROGRAM TECH HUB\\FILE HANDLING\\ABC.txt","w");
  if(ptr==NULL)
  {
    printf("\n File is not present \n");
  }
  else
  {
     fputs("Jay HO",ptr);
  }
  fclose(ptr);
  getch();
}
//write a string into text file take input from user
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr
	char ch[90];
	ptr=fopen("G:\\C PROGRAM TECH HUB\\FILE HANDLING\\ABC.txt","w");
	if(ptr==NULL)
	{
	  
	}
	fclose(ptr);	
	getch();
}