//write a record of 5 students in text file
#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *ptr;
 char name[90],Roll[3];
 ptr=fopen("G:\\C PROGRAM TECH HUB\\FILE HANDLING\\ABC.txt","w");
 if(ptr==NULL)
 {
   printf("\n File is Not present \n");
 }
 else
 {		
 		for(int i=0;i<5;i++)
 		{
		  printf("\n enter a name and roll no \n");
		  gets(name);
		  gets(Roll);
		  fputs(name,ptr);
		  fputs("\t",ptr);
		  fputs(Roll,ptr);
		  fputs("\n",ptr);
		}
 }
 fclose(ptr);
 getch();
 
}