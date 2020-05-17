#include <stdio.h>

int main(void) {
  int a, array1[300], check[300]; 
  scanf("%d", &a);
  for(int i=0; i<a; i++)
  {
    check[i]=0;               //cho day so bang 0
  }
  for(int i=0; i<a; i++)
  {
    scanf("%d", &array1[i]);
    check[array1[i]]++;       //cong so dem len 1
  }

  for(int i=1; i<a; i++)
  {
    printf("%d ", check[i]);
  }
  return 0;
}
