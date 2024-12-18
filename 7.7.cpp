
#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf(" %d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int check;
        while(1)
        {
        printf("Nhap phan tu le thu %d: ",i+1);
        scanf("%d",&check);
        if(check%2!=0)
        {
            arr[i]=check;
            break;
        }
        else
        {
            printf("Vui long nhap so le!\n");
        }
        }
    }
    printf("cac phan tu trong mang so le la:");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}


