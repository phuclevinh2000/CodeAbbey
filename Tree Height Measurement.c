#include <stdio.h>
#include <math.h>

int main(void) {
  float vao, a[100],b[100],c[100], check[100];
  scanf("%f", &vao);

  for(int i=0; i<vao; i++)      
  {
    scanf("%f %f", &a[i], &b[i]);
   // printf("\n");
   b[i]/=57.3;
   c[i]=b[i]-1.57;
   c[i]=tan(c[i]);
   check[i]=a[i]*c[i];
    
  }
  for(int i=0; i<vao; i++)
  {
   printf("%.0f ", check[i]);
  }
  return 0;
}
