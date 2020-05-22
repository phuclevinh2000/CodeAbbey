#include <stdio.h>

int main(void) {
  int a;
  int x[100], c[100], num[100],one[100], m[100];
  scanf("%d", &a);

  for(int i=0; i<a; i++)
  {
    scanf("%d %d %d %d %d", &one[i], &c[i], &m[i], &x[i], &num[i]);
  }
  for(int i=0; i<a; i++)
  {
    int count=0; 
    
    do{
      x[i]=(one[i] * x[i] + c[i]) % m[i];
      count++;
    }
    while(count<num[i]);
    printf("%d ", x[i]);
  }

  return 0;
}
