#include<stdio.h>

int x, y;
int sum, diff, mul;

void sum_diff_mul();

int main()
{
	back:
	printf("정수 두개를 입력하시오.\n");
	scanf_s("%d %d", &x, &y);

	if (x <= y)
	{
		goto back;
	}

	else
	{
		sum_diff_mul();
	}

}

void sum_diff_mul()
{
	sum = x + y;
	diff = x - y;
	mul = x * y;

	printf("x: %d\ny: %d\nSUM: %d, DIFF: %d, MUL: %d", x, y, sum, diff, mul);
}