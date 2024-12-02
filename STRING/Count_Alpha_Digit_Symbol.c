//wap to count Alphabet Digit and Special Symbol in string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char ch[90];
  printf("\n Enter a String as Input \n");
  gets(ch);
  printf("\n\n %s",ch);
  int i=0,alpha=0 , digit=0 , s_symbol=0 ;
  while(ch[i]!='\0')
  {
    if(ch[i]>=48 && ch[i]<=57)
    {
	  digit++;
	}
	else if (ch[i]>=65 && ch[i]<=90 || ch[i]>=97 && ch[i]<=122)
	{
	  alpha++;
	}
	else
	{
	 s_symbol++;
	}
	i++;
  }
  printf("\n Alphabet Count is %d",alpha);
  printf("\n Digit Count is %d",digit);
  printf("\n Special Symbol Count is %d",s_symbol);
  getch();
}