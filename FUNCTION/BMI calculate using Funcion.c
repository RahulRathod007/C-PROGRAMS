//Pass height in meter and weight in kg as parameter to function and display BMI result.
//BMI(Body Mass Index)
//formula = w / h^2;
#include<stdio.h>
#include<conio.h>
float bmi(float a, float b)
{
  float c = a / (b*b);
  printf("\n%f\n",c);
  return c;
}
void main()
{
  int i;
  float weight,height,n;
  printf("\n enter a weight in kg \n");
  scanf("%f",&weight);
  printf("\n enter a height in meter \n");
  scanf("%f",&height);
  n=bmi(weight,height);
  if(n<10.5)
  {
   printf("\n Underweight %f",n);
  }
  else if(n>18.5 && n<24.9)
  {
   printf("\n Normal Weight %f",n);
  }
  else if (n>25 && n<29.9)
  {
   printf("\n Overweight %f",n);
  }
  else
  {
   printf("\n Obesity %f",n);
  }
}