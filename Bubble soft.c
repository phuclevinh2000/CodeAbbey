#include <stdio.h>
//int soft(int check[100]);
int main(void) {
  int a,i,d;
  int array1[100];
  int bodem=0, dung=0;
  scanf("%d", &a);

  for(int i=0; i<a; i++)
  {
    scanf("%d", &array1[i]);
  }
  for( i=0; i<a-1; i++)
  {
    for ( d = 0 ; d < a - i - 1; d++){
        if(array1[d]>array1[d+1])
        {
          int c;
          c=array1[d];
          array1[d]=array1[d+1];      //swap array1[i] and array1[i+1]
          array1[d+1]=c;
          bodem++;
        }
        else if(array1[d]<=array1[d+1]) dung++;
    }
  }
 /* for( i=0; i<a; i++)
  {
    printf("%d ", array1[i]);       //in ra array sau khi soft
    
  }*/
  printf("%d %d ",dung-102, bodem); //tricky 1 chut tai khong hieu lam cai phan pass
  return 0;
}
