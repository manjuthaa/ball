#include <stdio.h>

int main(void) {
	char str[90],altchar[90];
	int i=0,length,j=0;
	printf("enter astring:");
	gets(str);
	length=strlen(str);
	i=length-1;
	while(i>=0)
	{
		altchar[j]=str[i];
		i=i-1;
		j=j+1;
	}
	altchar[i]='\0';
	printf("string is:\n");
	puts(altchar);
	return 0;
	}
