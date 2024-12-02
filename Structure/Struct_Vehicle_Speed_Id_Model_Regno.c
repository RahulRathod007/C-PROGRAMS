//Wap to Create a structure name as Vehicle with using field id,regno,speed,model to take input from user and display it.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  struct vehicle
  {
  	char id[90];
  	char regno[90];
  	char speed[90];
  	char model[90];
  };
  struct vehicle v;
  printf("\n enter a id ");
  scanf("%s",&v.id);
  printf("\n Enter a Registraion NO ");
  _flushall();
  gets(v.regno);
  printf("\n Enter a Speed ");
  gets(v.speed);
  printf("\n Enter a Vehicle Model ");
  gets(v.model);
  printf("\n Id is %s",v.id);
  printf("\n Registraion no %s",v.regno);
  printf("\n Speed %s",v.speed);
  printf("\n Model %s",v.model);
  getch();
}
