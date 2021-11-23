#include"header.h"
int main()
{
	int a[25]={1,2,3,4,5,6,7,8},n=8,i;
	printf("before the copy primary values in first array\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	copyarray(a,n);
}
