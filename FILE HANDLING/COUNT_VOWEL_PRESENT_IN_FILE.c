//wap to vowel present in file
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  int count=0;
  FILE *ptr;
  ptr=fopen("G:\\C PROGRAM TECH HUB\\FILE HANDLING\\ABC.txt","r");   //open file
  if(ptr==NULL)
  {
    printf("\n File is not present \n");
  }
  else
  {
  	do{
  		ch=fgetc(ch);
  		if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o'|| ch=='u' || ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
  		{
		  count++;
		}
  	}while(ch!=EOF);
  	printf("count is %d",count);
}
fclose(ptr);
getch();
}