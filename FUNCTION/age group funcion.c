//wap to input use age-group and create a function age_group and pass parameter to function.
#include<stdio.h>
#include<conio.h>
void main()
{
 void age_group(int);
 int age;
 printf("\n enter a age \n");
 scanf("%d",&age);
 age_group(age);
 getch();
}
void age_group(int a)
{
  if(a>0 && a<=6)
  {
   printf("\n Kid \n");
  }
  else if( a>6 && a<14)
  {
   printf("\n Child \n");
  }
  else if(a>=14 && a<=18)
  {
   printf("\n Teenager \n");
  }
  else if (a>18 && a<=35)
  {
   printf("\n Young Person \n");
  }
  else if (a>35 && a<50)
  {
   printf("\n Adult Person \n");
  }
  else
  {
   printf("\n Senior cityzen ");
  }
}