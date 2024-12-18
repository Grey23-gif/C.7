
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
        if(arr[i]%2==0)
        {
            arr[i]+=3;
        }
        else
        {
            arr[i]+=2;
        }
    }
    printf("Mang moi:");
    for(int i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
    }

    return 0;
}

