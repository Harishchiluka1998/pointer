#include"header.h"
int main()
{
	int arr[10]={5,4,2,1,6,9,8,7},type,i,j,n=8;
	printf("before unsorted array\n");
	printarray(arr,n);
	printf("enter 1 to sort in ascending and 0 to sort in descending order \n");
	scanf("%d",&type);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(type==1)
			{
				if(*(arr+j)<*(arr+i))
				{
					swap((arr+i),(arr+j));
				}
			}
			else if(type==0)
			{
				if(*(arr+j)>*(arr+i))
				{
					swap((arr+i),(arr+j));
				}
			}    
		}
	}
	printf("after ur required sorting will display\n");
	printarray(arr,n);
}
