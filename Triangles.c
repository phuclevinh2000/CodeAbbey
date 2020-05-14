#include <stdio.h>

int main(void) {
  int num;
  int a[100], b[100], c[100];
  scanf("%d", &num);

  for(int i=0; i<num; i++)
  {
    scanf("%d %d %d", &a[i], &b[i], &c[i]);
  }
  for(int i=0; i<num; i++)
  {
    if((a[i]+b[i]>c[i]) &&(a[i]+c[i]>b[i])&&(b[i]+c[i]>a[i])) printf("1 ");
    else printf("0 ");
  }
  return 0;
}
