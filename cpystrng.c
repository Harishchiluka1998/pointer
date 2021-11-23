#include "header.h"
int main()
{
	char text1[MAX_SIZE],text2[MAX_SIZE];
	char *str1=text1;
	char *str2=text2; 
	int cnt;
	printf("Enter any string: ");
	gets(text1);
	copy(text1,text2,cnt);
	printf("\nSecond string = %s\n",text1);
	printf("Second string = %s\n",text2);
	return 0;
}



