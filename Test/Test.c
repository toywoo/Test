#include <stdio.h>

void NewAdd(int a, int b)
{
	printf("%d", a + b);
}
void NewSub(int i, int j)
{
	printf("%d", i + j);
}

void main()
{
	printf("Hello World");
	NewAdd(3, 4);
	NewSub(4, 3);
}