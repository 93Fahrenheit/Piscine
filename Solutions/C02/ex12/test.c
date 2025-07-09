#include <stdio.h>
#include <unistd.h>

int main()
{
	char str[] = "Bonjour";
	int value = 42;
	int *ptr = &value;
	prinitf("Adresse de str : %p\n", str);
	printf("Adresse de ptr : %p\n", ptr);
	return (0);
}
