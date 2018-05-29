# programing-practice

#include<stdio.h>

int intpower(int m, int n);
void intInput(void);

int main(void)
{
 intInput();

 getchar(); getchar();
 return 0;
}


int intpower(int m, int n)
{
 int i = 1, y = 1;

 for (i = 1; i <= n; i++)
  y = y*m;


void intInput(void)
{
 int m, n;
 printf("정수 2개 입력: ");
 scanf_s("%d %d", &m, &n);
 printf("%d의 %d제곱은 %d입니다.\n", m, n, intpower(m, n));
}
