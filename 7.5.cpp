
#include <stdio.h>

int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int lon=0,nho=arr[0];
    for(int i=0;i<5;i++)
    {
        if(lon<arr[i])
        {
            lon=arr[i];
        }
        if(nho>arr[i])
        {
            nho=arr[i];
        }
    }
    printf("So lon nhat trong mang la: %d",lon);
    printf("\nSo nho nhat trong mang la: %d",nho);

    return 0;
}

