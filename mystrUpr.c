//strupr implementetion

#include<stdio.h>

void strUpr(char *a);

int main()
{
	char *a="Mehmet ali AkbAY";
	strUpr(a);

	return 0;
}

void strUpr(char *p)
{
	int i=0;
	while(*(p+i) != '\0')
		printf("%c",*(p+i)>90?*(p+i++)-32:*(p+i++));


}
