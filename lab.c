#include<stdio.h>
int main()
{
	int i,j,n,a[i],temp,index;
	for(i=1;i<=n;i++)
	{
		printf(" enter the no of elements in an array:");

		{
		scanf("%d",&a[i]);
		}
		printf("enter elements in an array:");
		
	}
	for (i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			
		 if (a[i]<a[j])	
		   {
			 
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	{
	printf("Sorted array\n:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	}
	
	return 0;
}
