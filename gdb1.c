#include <stdio.h>

main()
{
	int i=0;
	int sum=0;
	for(i=0; i<10; i++)
	{
		sum += i;
		printf("test gdb1 i:%d sum:%d\n", i, sum);
	}
}
