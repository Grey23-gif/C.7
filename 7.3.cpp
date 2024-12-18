#include <stdio.h>

int main()
{
    int A[5],dem=0;
    for(int i=0;i<5;i++)
    {
        printf("Nhap so %d: ",i+1);
        scanf("%d",&A[i]);
    }
    printf("Phan tu so chan mang la: ");
    for(int i=0;i<5;i++)
    {
        if(A[i]%2==0)
        {
            printf("%d ",A[i]);
            dem++;
        }
       
    }
    if(dem==0)
    {
        printf("Mang k co so chan.");
    }
    return 0;
}

