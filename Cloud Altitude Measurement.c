#include <stdio.h>
#include <math.h>

int main(void) {
  float vao, d1[100],a[100],b[100], check[100];
  scanf("%f", &vao);

  for(int i=0; i<vao; i++)      
  {
    scanf("%f %f %f", &d1[i], &a[i], &b[i]);
   // printf("\n");
   //b[i]/=57.3;
   //c[i]=b[i]-1.57;
   b[i]/=57.3;
   a[i]/=57.3;          //phai doi het sang rad
   b[i]=tan(b[i]);
   a[i]=tan(a[i]);
   check[i]=(b[i]*a[i]*d1[i])/(b[i]-a[i]);    //cong thuc (tanA*tanB*D1)/(tanB-tanA)=D2
    
  }
  for(int i=0; i<vao; i++)
  {
   printf("%.0f ",  check[i]);
  }
  return 0;
}
