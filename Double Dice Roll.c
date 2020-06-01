#include <stdio.h>
#include <math.h>

int main(void) {
  int a;
  double trai[100], phai[100], out[100];
  scanf("%d", &a);
  for(int i=0; i<a; i++)
  {
    scanf("%lf %lf", &trai[i], &phai[i]);
    //printf("%lf %lf ", trai, phai);
    trai[i]=trai[i]-floor(trai[i]/6)*6+1;         //thuat toan theo de bai
    phai[i]=phai[i]-floor(phai[i]/6)*6+1;
    //printf("%.0lf ", trai + phai);
  }
   for(int i=0; i<a; i++)
  {
    
    printf("%.0lf ", trai[i]+ phai[i]);
    
    //printf("%.0lf ", trai + phai);
  }
  return 0;
}
