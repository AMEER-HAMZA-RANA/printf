#include "../holberton.h"
#include <limits.h>
#include <stdio.h>


int main(void)
{
	char a = 'a';
	char *b = "Holberton";
	int c = INT_MAX;
	int count0, count1;

	count0 = _printf("simple statement\n");
	count1 = _printf("simple statement\n");
	printf("count [%d, %d]\n", count0, count1);

	count0 = _printf("%c\n", a);
	count1 = printf("%c\n", a);
	printf("count [%d, %d]\n", count0, count1);

	count0 = _printf("%s\n", b);
	count1 = printf("%s\n", b);
	printf("count [%d, %d]\n", count0, count1);

	count0 = _printf("%d\n", c);
	count1 = printf("%d\n", c);
	printf("count [%d, %d]\n", count0, count1);
}
