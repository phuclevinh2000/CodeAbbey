#include <stdio.h>
#include <math.h>

int main(void) {
  int a;
  double start[100], rate[100], sum[100];
  double canso[100], out[100], tren[100], duoi[100];
  scanf("%d", &a);
  for(int i=0; i<a; i++)
  {
    scanf("%lf %lf %lf", &start[i], &sum[i], &rate[i]);
   // out[i]=0;
  }
  for(int i=0; i<a; i++)
  {
//    canso[i]=log(1+rate[i]);
  /*  
    tren[i]=log10(sum[i]/start[i]);
    printf("%lf ", rate[i]);
    canso[i]=(rate[i]/100)+1;
    printf("%lf ", canso[i]);
    duoi[i]=log10(canso[i]);
    printf("%lf ", duoi[i]);
    out[i]=tren[i]/duoi[i];
    printf("%lf %lf %lf %lf ",tren[i], duoi[i], canso[i], out[i]);
    printf("%.0lf ", ceil(tren[i]/duoi[i]));
  }
  */
  rate[i]=rate[i]/100;
 // printf("%f ", rate[i]);
  out[i]=start[i]*(rate[i])+start[i];
  int count=1;
  do{
    out[i]+=out[i]*(rate[i]);
    count++;
    //printf("%f ", out[i]);
  }
  while(out[i]<sum[i]);
  printf("%d ", count);
  count=1;
  }
  return 0;
}
