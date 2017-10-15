//Strrev() implementation
#include<stdio.h>

char *myStrrev(char *);
int main()
{
	char first[]="Mehmet ali akbay";
	printf("%s",myStrrev(first));

	return 0;
}

char *myStrrev(char *src)
{
	int i=0,j;
	char *dest1,*dest2;
	dest1=(char*)malloc(sizeof(src));
	dest2=dest1;

	while(*src != '\0')
	{
		src++;
		i++;
	}
	for(j=1; j<=i; j++)
	{
		*dest1=*(src-j);
		dest1++;

	}
	*dest1='\0';
	return dest2;
}
