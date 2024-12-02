//wap wirte a character in text file
/*
#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *ptr;
	char ch;
	ptr=fopen("G:\\C PROGRAM TECH HUB\\FILE HANDLING\\ABC.txt","w");
	if(ptr==NULL)
	{
	  printf("\n File Is Not Present \n");
	}
	else
	{
	  fputc('A',ptr);
	}
	fclose(ptr);
	getch();  
}
*/


//wap wirte a character in text file take input from user
#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *ptr;
  char ch;
  ptr=fopen("G:\\C PROGRAM TECH HUB\\FILE HANDLING\\ABC.txt","w");
   if(ptr==NULL)
   {
     printf("\n File is not present \n");
   }
   else
   {
     printf("\n Enter a character \n");
     scanf("%c",ch);
     fputs(ch,ptr);
    
   }
   fclose(ptr);
  getch();
}