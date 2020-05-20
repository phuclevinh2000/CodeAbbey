#include <stdio.h>    //chua xong

int main(void) {
  int a ;
  float out[100];
  int trai[100], phai[100];
  scanf("%d", &a);
  for(int i=0; i <a; i++)
  {
    scanf("%d %d", &trai[i], &phai[i]);
  }
  int count=0;
  for(int i=0; i<a; i++)
  {
    float r=1;
    if(phai[i]==0) printf("1 ");
    else {
      do
      {
      out[i]=(r+trai[i]/r)/2;
      r=out[i];
      count++;    
      }
    while(count<phai[i]);
    printf("%.9f ", out[i]);
    }
  }
  
  return 0;
}
