#include <stdio.h>

int main(void) {
  int a, num1[100], num2[100], num3[100], out[100], ex[100];

  scanf("%d", &a);

  for(int i=0; i<a; i++)
  {
      scanf("%d", &num1[i]);
      scanf("%d", &num2[i]);
      scanf("%d", &num3[i]);
  }

  for(int i=0; i<a; i++)
  {
    out[i]=num1[i]*num2[i]+num3[i];
    ex[i]=0;
    while(out[i] > 0)
    {
     // printf("%d\n", out[i]);
      ex[i]+=out[i]%10;
      out[i]=out[i]/10;
      //printf("%d %d\n ", ex[i], out[i]);
    }

  }
  for(int i=0; i<a; i++)
  {
    printf("%d ", ex[i]);
  }

  
}
