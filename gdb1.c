#include <stdio.h>

void print_var(int a, int b)
{
	printf("test gdb1 i:%d sum:%d\n", a, b);
}

main()
{
	int i=0;
	int sum=0;
	for(i=0; i<10; i++)
	{
		sum += i;
		print_var(i, sum);
	}
}
