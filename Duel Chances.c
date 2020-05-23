#include <stdio.h>

int main(void) {
  int a; 
  float b[100], c[100], d[100];
  float out[100];
  scanf("%d", &a);

  for(int i=0; i<a; i++)
  {
    scanf("%f %f", &b[i], &c[i]);
    b[i]=b[i]/100;
    c[i]=c[i]/100;
    out[i] = b[i] / (b[i] + c[i] - b[i] * c[i]);     //cong thuc google ra
    //https://math.stackexchange.com/questions/1966227/strange-duel-chances-and-my-analysis
  }
  for(int i=0; i<a; i++)
  {
    out[i]=out[i]*100;
    printf("%.0f ", out[i]+0.00001);
  }
  return 0;
}
