#include <stdio.h>
int solution(int n);
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        solution(n);
    }
    return 0;
}
int solution(int n)
{
    int a,b,c,d;
    if (n%4==0)
    {
        a=b=c=d=(n/4);
        printf("%d %d %d %d\n",a,b,c,d);
        return 0;
    }
    if (n%4==3)
    {
        if (n%3==1)
        {
            a=b=c=(n/3);
            d=1;
            printf("%d %d %d %d\n",a,b,c,d);
            return 0;   
        }
        else
        a=c=2; d=1;
        b=(n-5);
        printf("%d %d %d %d\n",a,b,c,d);
        return 0;
    }
    if (n%4==2)
    {
        a=(n/2);
        b=(a-2);
        c=d=1;
        printf("%d %d %d %d\n",a,b,c,d);
        return 0;
    }
    if (n%4==1)
    {
        a=c=d=1;
        b=(n-3);
        printf("%d %d %d %d\n",a,b,c,d);
        return 0;
    }
    return 0;
}
