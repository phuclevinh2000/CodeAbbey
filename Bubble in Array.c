#include <stdio.h>

int main(void) {
  int array1[100],b, res=0;
  int count=0, bodem=0;
  //scanf("%d", &b);
  //int c=b;
  do
  {
    scanf("%d", &b);                //input the value
    array1[count]=b;
    count++;
  }
  while(b!=-1);
  
  for(int i=0; i<count-2; i++)
  {
    if(array1[i]>array1[i+1])
    {
      int c;
      c=array1[i];
      array1[i]=array1[i+1];      //swap array1[i] and array1[i+1]
      array1[i+1]=c;
      bodem++;
    }
  }
  for(int i=0; i<count-1; i++)
  {
    res+=array1[i];
    res*=113;
    res%=10000007;
   // printf("%d ", array1[i]);     //day la cai array sau khi soft
  }
  printf("%d %d",bodem, res);
}
