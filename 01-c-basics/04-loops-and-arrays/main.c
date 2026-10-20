    #include <stdio.h>
    
    int main(void)
    {
        printf("===Bai ngay 4===\n");

        printf("Bai 4.1:\n");
        int n;
        printf("Nhap so nguyen duong N: ");
        scanf("%d", &n);
        if (n > 0) 
        {
            printf("Cac so tu 1 den %d la:\n", n);
            for (int i = 1; i <= n; i++) 
            {
                printf("%d ", i);
            }
            printf("\n");
        } 
        else 
        {
            printf("So %d khong hop le.\n", n);
        }


        printf("Bai 4.2:\n");
        int m;
        printf("Nhap so nguyen duong M: ");
        scanf("%d", &m);
        int sum = 0;
        if (m > 0) 
        {
            for (int i = 1; i <= m; i++) 
            {
                sum += i;
            }
            printf("Tong cac so tu 1 den %d la: %d\n", m, sum);
        } 
        else 
        {
            printf("So %d khong hop le.\n", m);
        }

        printf("Bai 4.3:\n");
        int k;
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &k);
        if (k > 1 && k <= 5)
        {
            int arr[k];
            printf("Nhap cac phan tu cua mang:\n");
            for (int i = 0; i < k; i++) 
            {
                printf("arr[%d]: ", i);
                scanf("%d", &arr[i]);
            }
            printf("Cac phan tu cua mang la:\n");
            for (int i = 0; i < k; i++) 
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        } 
        else 
        {
            printf("So luong phan tu khong hop le. Vui long nhap so tu 1 den 5.\n");
        }

        printf("Bai 4.4:\n");
        int arr[5] = {12, 45, 7, 89, 23};
        int max = arr[0];
        int sumarr = 0;
        for (int i = 1; i < 5; i++) 
        {
            if (arr[i] > max) 
            {
                max = arr[i];
            }
            sumarr += arr[i];
        }
        printf("Gia tri lon nhat trong mang la: %d\n", max);
        printf("Tong cac phan tu trong mang la: %d\n", sumarr);
        return 0;
    }