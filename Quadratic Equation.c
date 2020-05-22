#include <stdio.h>
#include <math.h>

int main(void) {
  float a[100], b[100], c[100], del, out1[100], out2[100];
  int vao;
  scanf("%d", &vao);

  for(int i=0; i<vao; i++)
  {
    scanf("%f %f %f", &a[i], &b[i], &c[i]);
    del=(b[i]*b[i])-4*a[i]*c[i];
    if(del>=0)
    {
      out1[i]=(-b[i] + sqrt(b[i]*b[i] - 4*a[i]*c[i])) / (2*a[i]);
      out2[i]=(-b[i] - sqrt(b[i]*b[i] - 4*a[i]*c[i])) / (2*a[i]);
    }
    if(del<0)
    {
      out1[i]=
    }
  }

  return 0;
}
