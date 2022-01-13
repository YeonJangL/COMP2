#include<stdio.h>

int x, y;

int* a = NULL;
int* b = NULL;
int* c = NULL;

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
        sum_diff_mul(a, b, c);
        printf("x: %d\ny: %d\nSUM: %d, DIFF: %d, MUL: %d\n", x, y, *a, *b, *c);
    }

}

void sum_diff_mul(int sum, int diff, int mul)
{
    sum = x + y;
    diff = x - y;
    mul = x * y;

    a = &sum;
    b = &diff;
    c = &mul;
}