#include <stdio.h>

void in_menu(void);
int nhap_mang(int arr[], int n);
void xuat_mang(int arr[], int n);
int tim_max(int arr[], int n);
int tinh_tong(int arr[], int n);

int main(void)
{
    int n;
    int arr[100];
    int choice;
    while(1)
    {   
        in_menu();
        printf("Chon chuc nang: ");
        scanf("%d", &choice);
        if (choice < 1 || choice >5)
        {
            printf("Lua chon khong hop le. Vui long chon lai.\n");
            continue;
        }
        else
        {
            switch (choice)
            {
                case 1:
                    n = nhap_mang(arr, n);
                    break;
                case 2:
                    if (n <= 0)
                    {
                        printf("Mang chua duoc nhap. Vui long nhap mang truoc.\n");
                    }
                    else
                    {
                        xuat_mang(arr, n);
                    }
                    break;
                case 3:
                    if (n <= 0)
                    {
                        printf("Mang chua duoc nhap. Vui long nhap mang truoc.\n");
                    }
                    else
                    {
                        tim_max(arr, n);
                    }
                    break;
                case 4:
                    if (n <= 0)
                    {
                        printf("Mang chua duoc nhap. Vui long nhap mang truoc.\n");
                    }
                    else
                    {
                        tinh_tong(arr, n);
                    }
                    break;
                case 5:
                    printf("Thoat chuong trinh.\n");
                    return 0;
                default:
                    printf("Lua chon khong hop le. Vui long chon lai.\n");
            }
        }
    }
}
void in_menu(void)
{
    printf("=== QUAN LY MANG SO NGUYEN ===\n");
    printf("1. Nhap mang\n");
    printf("2. In mang\n");
    printf("3. Tim gia tri lon nhat\n");
    printf("4. Tinh tong mang\n");
    printf("5. Thoat\n");
}
int nhap_mang(int arr[], int n)
{
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100)
    {
        printf("So luong phan tu khong hop le. Vui long nhap so tu 1 den 100.\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("arr[%d]: ", i);
            scanf("%d", &arr[i]);
        }
    }
    return n;
}
void xuat_mang(int arr[], int n)
{
    printf("Cac phan tu cua mang la:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int tim_max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Gia tri lon nhat trong mang la: %d\n", max);
    return max;
}
int tinh_tong(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Tong cac phan tu trong mang la: %d\n", sum);
    return sum;
}