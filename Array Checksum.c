#include <stdio.h>

int main()
    {int i,n;
    long long int res=0,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {scanf("%d",&a);
        res+=a;
        res*=113;
        res%=10000007;}
    printf("%d",res);
return 0;}
