//myStrcat implementation
#include<stdio.h>

void myStrcat(char *dest, char *src);

int main()
{
	char a[]="Mehmet ",b[]="ali";
	myStrcat(a,b);


	return 0;
}

void myStrcat(char *dest, char *src)
{
	char *p=dest;
	while(*dest != '\0')dest++;
	while(*src != '\0')
	{
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
	puts(p);
}
