#include<stdio.h>
int main()
{
    int r,v,k,m,l=0;
    scanf("%d",&r);
    for(v=r;v>=1;v--)
    {
        l++;
        m=l;
        for(k=1;k<=v;k++)
        {
            printf("%d ",m);
            m++;
        }
        printf("
");
    }
}