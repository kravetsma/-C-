#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long* p = (long long*)malloc(sizeof(long long));
	*p = 123;

	printf("%i\n", *p);

    free(p);
}