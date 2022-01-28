#include<stdio.h>
int main()
{
    int l,b,w,c,f;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(2*w<l&&2*w<b)
    {
    f=(l-(2*w))*(b-(2*w));
    if(f>=0)
    printf("%d",(l*b-f)*c);
    else
    printf("Impossible");
    }
    else
    printf("Impossible");
    return 0;
}