#include<stdio.h>
copy(char *str1,char *str2,int cnt)
{
	cnt=0;
	while(*(str2++)=*(str1++))
	{
		cnt++;
	}
	printf("string length is %d",cnt);
}
void add(int(*a)[3],int (*b)[3],int (*c)[3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
				*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
		}
}
void swap(int *firstnumber,int *secondnumber)
{
		int temp;
			temp=*firstnumber;
				*firstnumber=*secondnumber;
					*secondnumber=temp;
}
void printarray(int *arr,int n)
{
		int i;
			for(i=0;i<n;i++)
						printf("%d  ",*(arr+i));
}


void copyarray(int *a,int n)
{
		int b[n],i;
			for(i=0;i<n;i++)
						b[i]=a[i];
				printf("after copy data into second array\n");
					for(i=0;i<n;i++)
								printf("%d  ",a[i]);
}


int *swapp(int *a,int *b)
{
		int temp;
		       temp=*a;
		              *a=*b;
			             *b=temp;
				     	printf("after swaping a=%d b=%d \n",*a,*b);
}

