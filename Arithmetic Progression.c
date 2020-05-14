#include <stdio.h>

int main(void) {
  int a;
  int num1[100], num2[100], num3[100], out[100];
  scanf("%d", &a );

  for(int i=0; i<a; i++)
  {
    scanf("%d %d %d", &num1[i], &num2[i], &num3[i]);
  }

  for(int i=0; i<a; i++)
  {
    int b[100];
    b[i]=num3[i]-1;
    int sum[100];
    sum[i]=b[i]*(1+b[i])/2;   //tong day so cong
    out[i]=num1[i]*num3[i]+num2[i]*sum[i];  //cong thuc sau khi phan tich ra
  } //A*C+B(1+2+3+...+n-1)
  for(int i=0; i<a; i++)
  {
   printf("%d ", out[i]);
  }
  return 0;
}
