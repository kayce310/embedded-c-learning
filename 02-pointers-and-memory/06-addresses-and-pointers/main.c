#include <stdio.h>

void inc_by_one(int *p)
{
    *p = *p + 1;
}
void calc_sum_diff(int a, int b, int *p_sum, int *p_diff)
{
    *p_sum = a + b;
    *p_diff = a - b;
}

int main(void)
{
    printf("===Bai ngay 6===\n");

    printf("Bai 6.1:\n");
    int n = 42;
    int *ptr = &n;
    printf("Gia tri cua n: %d\n",n);
    printf("Dia chi cua n: %p\n", (void *) &n);
    printf("Gia tri cua ptr: %p\n", (void *) ptr);
    printf("Gia tri doc duoc qua ptr: %d\n", *ptr);

    printf("Bai 6.2:\n");
    int val;
    printf("Nhap gia tri cua val: ");
    scanf("%d", &val);
    int *p_val = &val;
    *p_val = *p_val * 2;
    printf("Gia tri cua val sau khi nhan doi: %d\n", val);

    printf("Bai 6.3:\n");
    int count = 10;
    inc_by_one(&count);
    inc_by_one(&count);
    inc_by_one(&count);
    printf("Gia tri cua count sau khi tang 3 lan: %d\n", count);

    printf("Bai 6.4:\n");

    int a, b, sum, diff;
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);
    calc_sum_diff(a, b, &sum, &diff);
    printf("Tong cua %d va %d la: %d\n", a, b, sum);
    printf("Hieu cua %d va %d la: %d\n", a, b, diff);
}