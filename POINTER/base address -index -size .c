#include<stdio.h>
int main()
{
 int a[5]={10,20,30,40,50};
 for(int i=0;i<5;i++)
 {
  printf("\n %u ",*(&a[i]));
  // base address + index * size = *(a+i) = a[i]
  
  //i[a] = index *size + base address 
  //a[i] = base + index * size
  //i[a] = index * size + base address 
  //a[i] = i[a] = *(a+i) = *(i+a) = *(&a[i])
 }
 return 0;
}