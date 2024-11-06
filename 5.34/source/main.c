#include <stdio.h>

int powers(int, int);

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("power(%d,%d) = %d", a, b, powers(a, b));
}

int powers(int a, int b)
{
	if (b == 0) 
		return 1;
	else 
		return a * powers(a, b - 1);
}