#include <stdio.h>

int main(void) {
  int a;
  double array1[300];
  double out[300];
  scanf("%d", &a);
  for(int i=0; i<a; i++)
  {
    scanf("%lf", &array1[i]);
  }
  printf("%lf ", array1[0]);
  for(int i=1; i<a-1; i++)
  {
    out[i]=(array1[i-1]+array1[i]+array1[i+1])/3;
    printf("%lf ", out[i]);
  }
  printf("%.9lf ", array1[a]);
  return 0;
}
