#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  int a;
  double x[100], n[100], r;
  scanf("%d", &a);
  for(int i=0; i<a; i++)
  {
    scanf("%lf %lf", &x[i], &n[i]);
  }
  for(int i=0; i<a; i++)
  {
   // if(n[i]==0) printf("1 ");
    r=1;
    int step=0;
    while(step<n[i])           //chia theo de bai
    {
      r=(r+x[i]/r)/2;
      step++;
    }
    printf("%.9lf ", r);        //no bat 9 ki tu
  }
}
