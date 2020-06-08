//chuong trinh nay ap dung rieng cho tung bai, phai thay so vao thi moi chay duoc chu khong copy nguyen xxi vo duoc
#include <stdio.h>
#include <math.h>

int main(void) {
  int dodai[20], goc[20];
  float outx, outy;
  float x=0.0, y=0.0;
  const float PI = 3.14159265359;         //neu nhu khong define so PI nay thi se bi ra sai so

  for(int i=0; i<16; i++)
  {
    scanf("%d %d", &dodai[i], &goc[i]);
  }
  for(int i=0; i<16; i++)
  {
    //goc[i]=(goc[i]*3.14)/180;
    x=x+dodai[i]*sin((goc[i]*PI)/180);      //cong thuc   y2=y1 + D*cos(alpha)
    y=y+dodai[i]*cos((goc[i]*PI)/180);      //x2 = x1 + D*sin(alpha)
    //printf("\n%f %f", x,y);
  }
  printf("%.0f %.0f", x, y);
  return 0;
}
