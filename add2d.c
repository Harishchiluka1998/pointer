#include"header.h"
int main()
{
		int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},b[3][3]={{1,2,3},{4,5,6},{7,8,9}},c[3][3],i,j;
			add(a,b,c);
				for(i=0;i<3;i++)
						{
									for(j=0;j<3;j++)
													printf("  %d  ",*(*(c+i)+j));
											printf("\n");
												}
}
