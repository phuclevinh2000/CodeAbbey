#include <stdio.h>
//int soft(int check[100]); //chua xong
int main(void) {
  int a,i,d;
  int array1[100], check[100], sothutu[100];
  int bodem=0, dung=0;
  scanf("%d", &a);

  for(int i=0; i<a; i++)
  {
    scanf("%d", &array1[i]);
    check[i]=array1[i];
    sothutu[i]=i+1;
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
  for( i=0; i<a; i++)
  {
    printf("%d ", array1[i]);       //in ra array sau khi soft
  }
  printf("\n");
   for( i=0; i<a; i++)
  {
    int j=0;
    while(array1[i]!=check[j])      //so sanh voi nhau, neu nhu ma khong bang nhau thi nang j len 1
    {
      j++;
    }
    printf("%d ", j+1);
    j=0;
  }
 
  return 0;
}
