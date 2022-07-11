#include<stdio.h>
int main()
{
    int r,v,k;
    scanf("%d",&r);
    for(v=r;v>=1;v--)
    {
        for(k=v;k>=1;k--)
        
        {
            printf("%c ",v+64);
        }
        printf("
");
    }
}