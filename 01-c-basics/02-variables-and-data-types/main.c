#include <stdio.h>

int main(void)
{
    printf("===Bai ngay 2===\n");

    printf("Bai 2.1:\n");
    int a;
    int b;
    printf("Nhap so nguyen a: ");
    scanf(" %d", &a);
    printf("Nhap so nguyen b: ");
    scanf(" %d", &b);
    printf("Tong cua a + b la: %d\n", a + b);
    printf("Hieu cua a - b la: %d\n", a - b);
    printf("Tich cua a x b la: %d\n", a * b);
    printf("Thuong so thuc cua a / b la: %.2f\n", (float)a / b);
    printf("Phan du cua a chia b la: %d\n", a % b);

    printf("Bai 2.2:\n");
    float nhietdoC;
    printf("Nhap nhiet Do C: ");
    scanf("%f", &nhietdoC);
    float nhietdoF = (nhietdoC *  1.8 + 32);
    printf("Nhiet Do F tuong ung la: %.2f\n", nhietdoF);
    float dT, dL, dH;
    printf("Nhap Diem Toan, Ly, Hoa: ");
    scanf("%f %f %f", &dT, &dL, &dH);
    printf("Diem trung binh Toan Ly Hoa la: %.2f\n", (float)(dT + dL + dH) / 3);

    printf("Bai 2.3:\n");
    int x, y;
    printf("Nhap so nguyen x va y: ");
    scanf("%d %d", &x, &y);
    int res1 = (int) x / y;
    printf("Ket qua phep chia lay nguyen: %d\n", res1);
    float res2 = (float) x / y;
    printf("Ket qua chia co lay du: %f\n", res2);
     
    printf("Bai 2.4:\n");
    float R;
    const float PI = 3.13159f;
    printf("Nhap ban kinh: ");
    scanf("%f", &R);
    printf("Dien tich hinh tron: %2.2f\n", (float) PI * R * R);
    printf("Chu vi hinh tron: %2.2f\n", (float) PI * 2 * R);
    return 0;
}