#include <stdio.h>

int main()
{
	int a,w,fact=1;
	printf("enter the numbers \n");
	scanf("%d",&w);
	for(a=1;a<=w;a++)
	fact=fact*a;
	printf(" factorial of %d=%d \n",w,fact);
	return 0;
}
