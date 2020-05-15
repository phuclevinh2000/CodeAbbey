//Lam tron xuong, lay so de bai cho nhan cho 6 xong cong them 1
#include <stdio.h>
#include <math.h>

int ave(int num);
int main(void) {
  int a;
  scanf("%d", &a);
  double array1[100];

  for(int i=0; i<a; i++)
  {
    scanf("%lf", &array1[i]);
    array1[i]*=6;
    array1[i]++;
  }
  for(int i=0; i<a; i++)
  {
    printf("%.0lf ", floor(array1[i]));
  }
   
  return 0;
}
