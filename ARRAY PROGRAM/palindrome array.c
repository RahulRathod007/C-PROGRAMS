#include<stdio.h>
int main()
{
  int first,last,mid,i,size;
  printf("\n enter a array size \n");
  scanf("%d",&size);
  int a[size];
  printf("\n enter a elements want to be enter \n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n Given Array " );
  for(i=0;i<size;i++)
  {
   printf("\t%d",a[i]);
  }
  first = 0;  
  mid = size/2;
  last = size-1;
  for(i=0;i<mid;i++)
  {
    if(a[first]==a[last]) //a[i] == last 
    {
	  first++;    //last--
	  last--;
	}
	if(first==mid) // a[i] ==last
	{
	 printf("\n Given Array is Palindrome ");
	}
	else
	{
	 printf("\n Given Array is Not palindrome");
	}
    }
	return 0;
  }

