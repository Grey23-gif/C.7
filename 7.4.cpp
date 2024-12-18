#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Nhap phan tu thu %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    return 0;
}
