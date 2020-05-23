#include <stdio.h>
#include <math.h>

int main(void) {
  int a;
  float x1[100], x2[100], x3[100];
  float y1[100], y2[100], y3[100];
  float doan1[100], doan2[100], doan3[100], s[100], out[100];
  scanf("%d", &a);

  for(int i=0; i<a; i++)
  {
      scanf("%f %f %f %f %f %f", &x1[i], &y1[i], &x2[i], &y2[i], &x3[i], &y3[i]);
      //float mu1[100], mu2[100];
      //mu1[i]=(x1[i]-x2[i])^(x1[i]-x2[i]);
      doan1[i]=sqrt((x1[i]-x2[i])*(x1[i]-x2[i])+(y1[i]-y2[i])*(y1[i]-y2[i]));
      doan2[i]=sqrt((x1[i]-x3[i])*(x1[i]-x3[i])+(y1[i]-y3[i])*(y1[i]-y3[i]));
      doan3[i]=sqrt((x3[i]-x2[i])*(x3[i]-x2[i])+(y3[i]-y2[i])*(y3[i]-y2[i]));
     // printf("%f %f %f", doan1[i], doan2[i], doan3[i]);
     s[i]=(doan1[i]+doan2[i]+doan3[i])/2;

      out[i]=sqrt(s[i]*(s[i]-doan1[i])*(s[i]-doan2[i])*(s[i]-doan3[i]));
      //printf("\n");
     // printf("%f ", out[i]);
  }
  for(int i=0;i<a; i++)
  {
    printf("%.1f ", out[i]);
  }


  return 0;
}
