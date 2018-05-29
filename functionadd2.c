#include<stdio.h>
int add2(int a, int b);         //int add2(int, int)도 가능

int main(void)
{
	int a = 3, b = 5;

	int sum = add2(a, b);
	printf("합: %d\n", sum);
	printf("a=%d와 b=%d중에서 작은값은 %d입니다.", a, b, findMin2(a, b));

	getchar();
	return 0;
}

int add2(int a, int b)
{
	int sum = a + b;

	return (sum);

}

int findMin2(int x, int y)
{
	int min = x < y ? x : y;
	

	return (min);
}