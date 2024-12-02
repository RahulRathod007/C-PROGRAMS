#include<stdio.h>
int main()
{
 for(int i=1;i<=4;i++)
   {
     for(int j=1;j<=7;j++)
     {
   if(i<=3 && j<=4-i || j>=9-i)
   {
     printf("");
   }
   else
   {
    printf("*");
   }
  }
  printf("\n"); 
}
return 0;
}
