//wap to count vowel and cosonant in string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 void vowel_cons( char []);
 char ch[90];
 printf("\n enter a string from keyboard \n");
 gets(ch);
 vowel_cons(ch);
 getch();
}
void  vowel_cons(char n[])
{
	int vowel=0,consonant=0,i=0;
 	while(n[i]!='\0')
 	{
   		if(n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u')
   		{
    		vowel++;
   		}
   		else
   		{
    		consonant++;
   		}
   		i++;
 	}
 	printf("\n Vowels is %d",vowel);
 	printf("\n Consonant is %d",consonant);
}
