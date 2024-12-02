#include<stdio.h>
#include<conio.h>
void main()
{
    int size1,size2,size3,i,k;
	printf("\n enter array 1 size\n");
    scanf("%d",&size1);
    int a[size1];
    printf("\n enter elements of array 1 \n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter array 2 size\n");
    scanf("%d",&size2);
    int b[size2];
    printf("\n enter a elements of array 2 \n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&b[i]);
    }
    size3=size1+size2;
    int c[size3];
    k=0;
    for(i=0;i<size1;i++)
    {
        c[k] = a[i];
        k++;
    }
    for(i=0;i<size2;i++)
    {
        c[k] = b[i];
        k++;
    }
    printf("\n Merged Array :");
    for(i=0;i<size3;i++)
    {
	 printf("\t%d",c[i]);
	}
    return 0;
}


