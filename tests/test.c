#include "../holberton.h"


int main(void)
{
	char a = 'a';
	char *b = "Holberton";
	char c = '%';
	int d = 1000000;

	_printf("character test: %c\n", a);

	_printf("String test: %s\n", b);

	_printf("percent test: %\n", c);
	
	_printf("decimal test: %d\n", d);

	_printf("integer test: %i\n", d);

	_printf("No args: Hello, world\n");

	_printf("unknown arg: %c %c %a %c\n", a, a, a, a);

	_printf("Mixed arg: char %c, int %d, string %s\n", a, d, b);

	_printf("extra arg: %c, %c\n", a, a, a);

	_printf("less arg: %c, %c, %c\n", a, a);
	
	_printf("extra %: %%%%%% %c\n", a);
	return (0);
}
