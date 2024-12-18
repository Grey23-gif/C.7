#include <stdio.h>

int main()
{
    int hang,cot;
    printf("Nhap so hang: ");
    scanf(" %d",&hang);
    printf("Nhap so cot: ");
    scanf(" %d",&cot);
    
    int arr[hang][cot];
    for(int i=0;i<hang;i++)
    {
        for(int j=0;j<cot;j++)
        {
            printf("Nhap phan tu tai vi tri [%d] [%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nMa tr?n v?a nh?p là:\n");
    for (int i = 0; i < hang; i++) 
    {
        for (int j = 0; j <cot; j++) 
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

