#include <stdio.h>
#include<string.h>
int main()
{
char s1[9],s2[9];
	scanf("%s",s1);
	strcpy(s2,s1);
	strrev(s2);
	if(strcmp(s2,s1)==0)
	printf("the given sting is palindrome");
	else
	printf("no");
	return 0;
}
