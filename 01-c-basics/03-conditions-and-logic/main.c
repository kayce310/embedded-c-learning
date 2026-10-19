#include <stdio.h>

int main(void)
{
    printf("===Bai ngay 3===/n");

    printf("Bai 3.1:\n");
    int n;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    if (n > 0) 
    {
        printf("So %d la so duong.\n", n);
    }
    else if (n < 0) 
    {
        printf("So %d la so am.\n", n);
    }
    else 
    {
        printf("So %d la so 0.\n", n);
    }

    printf("Bai 3.2:\n");
    float t;
    printf("Nhap nhiet do: ");
    scanf("%f", &t);
    if (t >= -20.0 && t <= 100)
    {
        printf("Gia tri cam bien hop le: %.1f degC.\n", t);
    }
    else
    {
        printf("CANH BAO: Gia tri cam bien NGOAI PHAM VI cho phep! \n");
    }

    printf("Bai 3.3:\n");
    float a,b;
    char op;
    printf("Nhap 2 so thuc a va b: ");
    scanf("%f %f", &a, &b);
    printf("Nhap phep toan (+, -, *, /): ");
    scanf(" %c", &op);
    switch (op) 
    {
        case '+':
            printf("Ket qua: %.2f\n", a + b);
            break;
        case '-':
            printf("Ket qua: %.2f\n", a - b);
            break;
        case '*':
            printf("Ket qua: %.2f\n", a * b);
            break;
        case '/':
            if (b != 0) 
            {
                printf("Ket qua: %.2f\n", a / b);
            } 
            else 
            {
                printf("Loi: Khong the chia cho 0.\n");
            }
            break;
        default:
            printf("Loi: Phep toan khong hop le.\n");
    }
    
    printf("Bai 3.4:\n");
    int mode;
    printf("Nhap che do: ");
    scanf("%d", &mode);
    switch (mode) 
    {
        case 1:
            printf("Che do Binh thuong.\n");
            break;
        case 2:
            printf("Che do Tiet kiem pin.\n");
            break;
        case 3:
            printf("Che do Hieu nang cao.\n");
            break;
        default:
            printf("LOI: Ma che do %d khong hop le! Thiet bi giu nguyen trang thai an toan.\n", mode);
    }

}