#include <stdio.h>


int main(void)
{
    int i,j,k,n;
    int val[1000];
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",val);
        for(j=1;j<1000;j++)
        {
            val[j] = ((val[j-1]*val[j-1])/100)%10000;     /chia theo tung cai, khong co lam chung 1 day nhu minh lam
            for(k=j-1;k>=0;k--)
            {
                if(val[j]==val[k])
                {
                    printf("%d ",j);
                    j=1000;
                }
            }
        }
    }
    return 0;
}
