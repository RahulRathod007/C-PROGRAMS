//WAP to structure name as Product with field id,name and price and create array of structure of 5 and perform following operation on it.
//Case 1: Store data in structure array
//Case 2: View all data from structure array
//Case 3: arrange all products in descending order by price 
//Case 4: Delete product by its id and shift index lower side.
//Case 5: Search product by name or by id
//Case 6: Find the same price product and display it

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  struct product 
 {
  int id;
  char name[90];
  float price;
 };
 int ch;
 char ex;
 struct product p[2];
 do 
 {  
    printf("\n 1. Store Data in Structure Array \n");
    printf("\n 2. View all Data From Structure Array \n");
    printf("\n 3. Arrange all Product in desecending order by price \n");
    printf("\n 4. Search product bt name or id \n");
    printf("\n 5. Delete product by name or id \n");
    printf("\n 6. Find the same price product and display it \n");
    
    printf("\n enter a Choice \n");
    scanf("%d",&ch);
    
   // int size = 2;
   
    switch (ch)
    {
	   case 1: for (int i=0;i<5;i++)
	           {
			     printf("\n enter a id name and price \n");
			     scanf("%d%s%f",&p[i].id,&p[i].name,&p[i].price);
			   }
			   break;
	   case 2: printf("\n Display Product Id , Name , And Price \n");
	           for(int i=0;i<5;i++)
	           {
			     printf("id %d\t Name %s\tPrice %f\t\n",p[i].id,p[i].name,p[i].price);
			   }
			   break;
	   case 3: printf("\n Arrange all price in desecending order \n");
				
				for(int i = 0; i<5;i++)
				{
					for(int j = 1 + i; j<5;j++)
					{
						if(p[i].price < p[j].price)
						{
							int temp = p[i].price;
							p[i].price = p[j].price;
							p[j].price = temp;
							
							char name_temp [50];
							strcpy(name_temp,p[i].name);
							strcpy(p[i].name,p[j].name);
							strycpy(p[j].name,name_temp);
							
							int id_temp = p[i].id;
							p[i].id=p[j].id;
							p[j].id=temp;
							
							char name_temp [5
						}
					}
				}
	           
	           
			   break;
		case 4: printf("\n \n");
		        int skey;
		        printf("\n enter a search key \n");
		        for(i=0;i<5;i++)
		        {
//				  if
				}
		        
	           
	}

   printf("\n Do You want to continue \n");
   scanf(" %c",&ex);
   
 }
  while(ex =='y' || ex=='Y');
  getch();
}