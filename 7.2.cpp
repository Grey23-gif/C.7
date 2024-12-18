#include <stdio.h>

int main()
{
    int A[5];
    for(int i=0;i<5;i++)
    {
        printf("Nhap so %d: ",i+1);
        scanf("%d",&A[i]);
    }
    printf("Phan tu trong mang la:");
    for(int i=0;i<5;i++)
    {
     
        printf(" %d ",A[i]);
    }
    return 0;
}

