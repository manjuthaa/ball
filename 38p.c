#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d",&a);
	for(b=2;b<a;b+2)
	{
	if(a/b==0)
	{
		printf("%d\t",a);
	}
	}
	return 0;
}
