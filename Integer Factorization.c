#include <stdio.h>

int main(void) {
  long long int a, vao[100];
  scanf("%lld", &a);

  for(int i=0; i<a; i++)
  {
    scanf("%lld", &vao[i]);
  }
  for(int i=0; i<a; i++)
  {
    long long int count=2;
  do{
    if(vao[i]%count==0)
    {
      printf("%lld*", count);
      vao[i]/=count;
    }
    else count+=2;
  }
  while(vao[i]!=count);
  printf("%lld ", count);
  }
  return 0;
}
