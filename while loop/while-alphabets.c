//print all alphabets 
#include<stdio.h>
#include<conio.h>
void main()
{
	char i,j;
	i=65;
printf("\n Capital Letters \n");
	while(i<=90)
	{
	printf("%c \t",i);
	i++;
	}
j=97;
printf("\n Small letters \n");
while(j<=122)
{
printf("%c\t",j);
j++;
}
getch();
}