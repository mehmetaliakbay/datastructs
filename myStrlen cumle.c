//cumleleri sayan uygulama
#include<stdio.h>
#include<ctype.h>

int myStrlen(const char *sent);
int main()
{
	char *a=" ali ata bak ";

	printf("%d\n",myStrlen(a));

	return 0;
}

int myStrlen(const char *a)
{
	int sum=0;

	while(*a != '\0')
	{
		while(isspace(*a))a++;

		if (*a != '\0')
			sum++;
		
		while((!isspace(*a)) && (*a != '\0'))a++;


	}
	return sum;
}
