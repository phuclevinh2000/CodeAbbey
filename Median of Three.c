#include <stdio.h>

int main(void) {
  int a;
  int num1[100], num2[100], num3[100], out[100];
  scanf("%d", &a);

  for(int i=0; i<a; i++)
  {
    scanf("%d %d %d", &num1[i], &num2[i], &num3[i]);
  }
  for(int i=0; i<=a; i++)
  {
    if((num1[i]>num2[i] && num1[i]<num3[i]) || (num1[i]>num3[i] && num1[i]<num2[i]) ) out[i]=num1[i];
    else if((num2[i]>num1[i] && num2[i]<num3[i]) || (num2[i]>num3[i] && num2[i]<num1[i]) ) out[i]=num2[i];
    else if((num3[i]>num1[i] && num3[i]<num2[i]) || (num3[i]>num2[i] && num3[i]<num1[i]) ) out[i]=num3[i];
    //else out[i]=num3[i];
  }
  for(int i=0; i<a; i++)
  {
    printf("%d ", out[i]);
  }
  return 0;
}
