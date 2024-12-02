//wap to open file to read content
#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *ptr;
  ptr=fopen("G:\\C PROGRAM TECH HUB\\FILE HANDLING\\ABC.txt","r");   //open file
  if(ptr==NULL)
  {
   printf("\n File is Not Presnet \n");
  }
  else
  {
    printf("\n FILE OPENED \n");
  }
  fclose(ptr); //closed file
  getch();
}