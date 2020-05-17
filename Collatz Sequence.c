#include <stdio.h>

int main(void) {
  int a;
  int array1[100], count=0;
  scanf("%d",&a);

  for(int i=0; i<a; i++)
  {
    scanf("%d", &array1[i]);
    count=0;
  }
  for(int i=0; i<a; i++)
  {
    while(array1[i]!=1)                 //lam toi khi nao ma so do bang 1 thi moi thoi
    {
      if(array1[i]%2==0)                //neu la so chan thi chia 2
      {
        array1[i]/=2;
        count++;
        //printf("%d %d", array1[i], count);
    }
      else
      {
        array1[i]=array1[i]*3+1;      //neu la so le thi nhan 3 cong 1
        count++;  
        //printf("%d %d", array1[i], count);
      }
    }
    printf("%d ", count);
    count=0;
  }
  return 0;
}
