#include<stdio.h>
int main()
{
	int a[10],len,skey,flag=0,i,m,l=0,r;
	printf("\nEnter values in array\n");
	for( i=0; i<len; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter search key\n");
	scanf("%d",&skey);
	printf("\nDisplay all array values\n");
	for(i=0;i<len;i++)
	{
		printf("%4d",a[i]);
	}
    r=(len-1);
    while(l<=r){
    	m=l+(r-l)/2;
    	if(a[m]==skey)
		{
    		flag=1;
    		break;
		}
		if(a[m]<skey)
		{
			l=m+1;
		}
		else {
			r=m-1;
		}
	}
	if(flag){
		printf("\nValue found");
	}
	else{
		printf("\nValue not found");
	}	
	return 0;
}