#include <stdio.h>

//khong can phai luu duoi dang array gi het, chi cann luu duoi dang 1 so xong cong thang vo sum chu khong can phai dung mang 2 chieu
int main ()
{
    int i,n,k;
    float j=0.f,num=0.1f,rez=0.f;
    scanf("%d",&n);
    float mas[n];
    for(i=0;i<n;i++)
    {
        k=0;
        j=0;
        while(num!=0)
        {
            k=k+1;
            scanf("%f",&num);
            j=(j+num);
        }
        mas[i]=j/(k-1);
        num=0.1f;
    }
    for(i=0;i<n;i++)
    {
        printf("%.2f ",mas[i]);
    }

    return 0;

}
