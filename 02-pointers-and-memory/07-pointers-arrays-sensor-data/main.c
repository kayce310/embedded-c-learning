#include<stdio.h>

void find_adc_min_max(const int *adc, int size, int *adc_min, int *adc_max)
{
    if (adc == NULL || size <=0 || adc_min == NULL || adc_max == NULL)
    {
        printf("Gia tri khong hop le!\n");
    }
    else
    {
        *adc_min = *adc;
        *adc_max = *adc;
        for (int i = 0; i < size; i++)
        {
            if (*(adc + i) < *adc_min)
            {
                *adc_min = *(adc + i);
            }
            if (*(adc + i) > *adc_max)
            {
                *adc_max = *(adc + i);
            }
        }
    }
}
float calculate_adc_average(const int *arr, int size)
{
    if (arr == NULL || size <= 0)
    {
        printf("Gia tri khong hop le!\n");
        return -1.0f;
    }
    else
    {
        int sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += *(arr + i);
        }
        return (float)sum / size;
    }
}
int filter_valid_adc(const int *raw_arr, int raw_size, int *filtered_arr)
{
    if (raw_arr == NULL || filtered_arr == NULL || raw_size <= 0)
    {
        printf("Gia tri khong hop le!\n");
        return -1;
    }
    else
    {
        int count = 0;
        for (int i = 0; i < raw_size; i++)
        {
            if (*(raw_arr + i) >= 0 && *(raw_arr + i) <= 4095)
            {
                *(filtered_arr + count) = *(raw_arr + i);
                count++;
            }
        }
        return count;
    }
}

int main(void)
{
    printf("===Bai ngay 7===\n");

    printf("Bai 7.1:\n");

    int adc[6] = {1024, 2048, 512, 3500, 1800, 2200};
    int adc_min, adc_max;
    find_adc_min_max(adc, sizeof(adc) / sizeof(adc[0]), &adc_min, &adc_max);
    printf("Gia tri nho nhat trong mang adc: %d\n", adc_min);
    printf("Gia tri lon nhat trong mang adc: %d\n", adc_max);

    printf("Bai 7.2:\n");

    int k;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &k);
    if (k > 1 && k <= 5)
    {
        int arr[k];
        float adc_average;
        printf("Nhap cac phan tu cua mang:\n");
        for (int i = 0; i < k; i++) 
        {
            printf("arr[%d]: ", i);
            scanf("%d", &arr[i]);
        }
        adc_average = calculate_adc_average(arr, k);
        if (adc_average <= 2000.0)
        {
            printf("Trung binh ADC: %.2f | Trang thai: An toan\n", adc_average);
        }
        else
        {
            printf("Trung binh ADC: %.2f | CANH BAO: Dien ap vuot nguong an toan!\n", adc_average);
        }   
        printf("\n");
    } 
    else 
    {
        printf("So luong phan tu khong hop le. Vui long nhap so tu 1 den 5.\n");
    }

    printf("Bai 7.3:\n");
    int kf;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &kf);
    if (kf > 1 && kf <= 5)
    {
        int arrf[kf];
                printf("Nhap cac phan tu cua mang:\n");
        for (int i = 0; i < kf; i++) 
        {
            printf("arrf[%d]: ", i);
            scanf("%d", &arrf[i]);
        }
        filter_valid_adc(arrf, kf, arrf);
        printf("Cac gia tri hop le trong mang arrf la:\n");
        for (int i = 0; i < kf; i++) 
        {
            printf("arrf[%d]: %d\n", i, arrf[i]);
        }
    } 
    else 
    {
        printf("So luong phan tu khong hop le. Vui long nhap so tu 1 den 5.\n");
    }


}