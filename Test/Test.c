#include <stdio.h>
#include <math.h>

void NewAdd(int a, int b)
{
	printf("%d\n", a + b);
}
void NewSub(int i, int j)
{
	printf("%d\n", i + j);
}
void NewDiv(int i, int j)
{
	printf("%d", i / j);
}
void Newroot(int i)
{
	printf("%d", sqrt(i));
}

void main()
{
	printf("Hello World");
	NewAdd(3, 4);
	NewSub(4, 3);
	NewDiv(4, 2);
	Newroot(4);
}