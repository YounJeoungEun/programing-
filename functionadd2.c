#include<stdio.h>
int add2(int a, int b);         //int add2(int, int)�� ����

int main(void)
{
	int a = 3, b = 5;

	int sum = add2(a, b);
	printf("��: %d\n", sum);
	printf("a=%d�� b=%d�߿��� �������� %d�Դϴ�.", a, b, findMin2(a, b));

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