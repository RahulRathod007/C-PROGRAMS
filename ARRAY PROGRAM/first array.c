#include<stdio.h>
int main()
{
 int a[5],i,len;
 len=sizeof(a) /sizeof(a[0]);
 printf("\n \n ");
 printf("enter a values in Array \n");
 for(i=0;i<len;i++)
 {
   scanf("%d",&a[i]);
  }
  printf("\n Display Array values \n");
  for(i=0;i<len;i++)
  {
    printf("\ta[%d] ---> %d\n",i,a[i]);
  }
  return 0;
}