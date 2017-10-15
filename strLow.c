//strLow implementetion
#include<stdio.h>

void strLow(char *a);

int main()
{
	char *a="Mehmet alI AkbAY";
	strLow(a);

	return 0;
}

void strLow(char *p)
{
	int i=0;
	while(*(p+i) != '\0')
		printf("%c",(65<=*(p+i) && *(p+i)<=90 )?*(p+i++)+32:*(p+i++));


}
