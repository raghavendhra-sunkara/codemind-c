#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,count=0,l;
    scanf("%[^
]s",str);
    l=strlen(str);
    for (i=0;i<l;i++)
    {
        if (str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            count++;
        }
    }
    printf("%d",count);
}