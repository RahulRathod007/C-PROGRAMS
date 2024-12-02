//wap to read  a content of file character by character 
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  FILE *ptr;
  ptr=fopen("G:\\C PROGRAM TECH HUB\\FILE HANDLING\\ABC.txt","r");   //open file
  if(ptr==NULL)
  {
    printf("\n File is not Present \n");
  }
  else
  {
    printf("\n FIle OPENED \n");
  }
  do{
  ch=fgetc(ptr);  //get character
  printf("%c",ch);
}while(ch!=EOF);  //end of file
fclose(ptr);
getch();
}