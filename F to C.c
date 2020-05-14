#include <stdio.h>

int main() {
  float a;
  float check[400], out[400];

  scanf("%f", &a);

  for(int i=0; i<a; i++)
  {
    scanf("%f", &check[i]);
  }

  for(int i=0; i<a; i++)
  {
   // printf("%d", check[i]);
    out[i]=(check[i]-32)*5/9;
  }
  for(int i=0; i<a; i++)
  {
    printf("%.0f ", out[i]);
  }
 
  return 0;
}
