#include<stdio.h>
int main()
{
 for(int i=1;i<=5;i++)
 {
   for(int j=5;j>=1;j--)
   {
    if(j<=i)
    { 
      if(i%2!=0)
      {
	   printf("%d",j);
	  }
	  else 
	  {
	   printf("*");
	  }
}
	else
	{
	 printf(" ");
	}  
   }
   printf("\n");
 }
 return 0;
}