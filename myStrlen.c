//strlen implementiton
#include<stdio.h>

int myStrlen(const char *sent);
int main()
{
	char *a="Mehmet ali";

	printf("%d\n",myStrlen(a));

	return 0;
}

int myStrlen(const char *sent)
{
	int sum=0;
	while(*sent !='\0')
	{
		sum++;
		sent++;
	}
	return sum;
}
