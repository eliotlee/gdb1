#include <stdio.h>

void print_var(int a, int b)
{
	printf("test gdb1 i:%d sum:%d\n", a, b);
}

void print_var2(int c, int d)
{
   printf("test2 gdb1 i:%d sum:%d\n", c, d);
}

void main()
{
	int i=0;
	int sum=0;
	for(i=0; i<10; i++)
	{
		sum += i;
		print_var(i, sum);
	
		print_var2(i, sum);
	}
}
