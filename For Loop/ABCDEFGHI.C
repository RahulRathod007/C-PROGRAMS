#include<stdio.h>
int main()
{ 
 char ch=64;
 for(int i=1;i<=5;i++)
 {
  for(int j=1;j<=5;j++)
  { 
   printf("%c",ch+j);
   
  }
  ch++;
  printf("\n");
 } 
 return 0;
}