//wap to calculate monthly telephone bill as per following crateria.
#include<stdio.h>
#include<conio.h>
int main()
{
  int call_bill(int);
  int call,result;
  printf("\n enter a no of phone calls \n");
  scanf("%d",&call);
  call_bill(call);
  result = call_bill(call);
  printf("Monthly calculate bill is %d",result);
}
int call_bill(int c)
{ 
  int bill;
  if(c>0 && c<=100)
  {
   bill = 200;
  }
  else if(c>100 && c<=150)
  {
   bill = 200+(c*0.60);
  }
  else if (c>150 && c<=200)
  {
   bill = 200+(c*0.60)+(c*0.50);
  }
  else
  {
    bill = 200+(c*0.60)+(c*.50)+(c*0.40);
  }
  return bill;
}