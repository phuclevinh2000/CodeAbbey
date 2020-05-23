#include <stdio.h>

int main(void) {
  int a; 
  float b[100], c[100], d[100], out[100];
  scanf("%d", &a);

  for(int i=0; i<a; i++)
  {
    scanf("%f %f %f", &b[i], &c[i], &d[i]);
    out[i]=b[i]/(1+(d[i])/c[i]);
  }
  for(int i=0; i<a; i++)
  printf("%f ", out[i]);
  return 0;
}
