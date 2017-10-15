//strcmp implementetion
#include<stdio.h>
#include<string.h>

int myStrcmp(const char *, const char *);
int i=0;
int main()
{
	char *a="may",*b="may";
	int sayi;

	sayi=myStrcmp(a,b);
	printf("%d",sayi);

	return 0;
}

int myStrcmp(const char *first, const char *second)
{
	while(*first != '\0' || *second != '\0')
	{
		if (*first>*second)
		{
			return 1;
		}
		else if(*first<*second)
		{
			return -1;
		}
		else if(*first==*second)
		{

			first++;
			second++;
			myStrcmp(first,second);
		}
	}
	
	return 0;
}
