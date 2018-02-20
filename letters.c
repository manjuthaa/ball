#include <stdio.h>

int main(void) {
char a[20];
int count=0,i,p;
scanf("%s",&a);
p=strlen(a);
for(i=0;i<p;i++)
{
	if(a[i]=' ')
	++count;
}
printf("%d",count);
return 0;
}
