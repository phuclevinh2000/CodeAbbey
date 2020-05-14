#include <stdio.h>

int main(void) {
  int a;
  float nang[100], cao[100], bmi[100];
  scanf("%d", &a);

  for(int i=0; i<a; i++)
  {
    scanf("%f %f", &nang[i], &cao[i]);
  }
  for(int i=0; i<a; i++)
  {
   //scanf("%f %f", &nang[i], &cao[i]);
    bmi[i]= nang[i]/(cao[i]*cao[i]);
    if(bmi[i]<18.5) printf("under ");
    else if (bmi[i]>=18.5 && bmi[i]<25) printf("normal ");
    else if (bmi[i]>=25 && bmi[i]<30) printf("over ");
    else printf("obese ");
  }
  return 0;
}
