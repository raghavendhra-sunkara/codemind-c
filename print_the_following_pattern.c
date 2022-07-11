#include<stdio.h>
int main()
{
    int n,v,k;
    scanf("%d",&n);
    for(v=1;v<=n;v++)
    {
        for(k=1;k<=v;k++)
        {
            printf("%d",k);
        }
        printf("
");
    }
}