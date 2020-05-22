#include <stdio.h>
#include <math.h>

int main(void) {
  int a[100], vao, b[100], c[100];
  scanf("%d", &vao);

  for(int i=0; i<vao; i++)
  {
    scanf("%d %d %d", &a[i], &b[i], &c[i]);
  }

  return 0;
}
