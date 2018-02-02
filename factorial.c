#include <stdio.h>

int main()
{
	int a,i,fact=1;
	printf("enter the numbers \n");
	scanf("%d",&i);
	for(a=1;a<=i;a++)
	fact=fact*a;
	printf(" factorial of %d=%d \n",i,fact);
	return 0;
}
