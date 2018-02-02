#include<stdio.h>
int main()
{
	int num,reverse=0,no;
	printf("enter the numbr\t");
	scanf("%d",&num);
	while(num!=0)
	{
		no=num%10;
		num=num/10;
		reverse=reverse*10+no;
			}
			printf("reverse is %d",reverse);
			return 0;
}
