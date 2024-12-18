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
    printf("Cac phan tu trong mang vua nhap: ");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
  
    printf("\nCac so nguyen to co trong mang: ");
    for(int j=0;j<n;j++)
    {
        int dem=1;
        if(arr[j]>1)
        {
    for(int i=2;i*i<=arr[j];i++)
    {
        if(arr[j]%i==0)
        {
            dem=0;
        }
    }
    if(dem==1)
    {
        printf(" %d",arr[j]);
    }
        }
    }
    return 0;
}
