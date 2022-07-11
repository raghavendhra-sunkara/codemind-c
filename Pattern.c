#include<stdio.h>
int main()
{
    int r,v,k;
    scanf("%d",&r);
    for(v=1;v<=r;v++)
    {
        for(k=r;k>=1;k--)
        {
            printf("%d ",v);
        }
        printf("
");
    }
}