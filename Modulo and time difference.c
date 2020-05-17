#include <stdio.h>
//lam bang cach doi het sang giay tru xong doi ngnuoc lai
int main(void) {
  int a;
  int array1[100][100], sum1[100], sum2[100], diff[100], ngay[100];
  scanf("%d", &a);

for(int i=0; i<a; i++){
  sum1[i]=0;
  sum2[i]=0;
}
  for(int i=0; i<a; i++)
  {
    for(int j=0; j<8; j++)
    {
      scanf("%d",&array1[i][j]);                  //phan tich toan bo de bai ra giay
      if(j==0) sum1[i]+=(86400*array1[i][j]);
      else if(j==1) sum1[i]+=(3600*array1[i][j]);
      else if(j==2) sum1[i]+=(60*array1[i][j]);
      else if(j==3) sum1[i]+=(1*array1[i][j]);
      else if(j==4) sum2[i]+=(86400*array1[i][j]);
      else if(j==5) sum2[i]+=(3600*array1[i][j]);
      else if(j==6) sum2[i]+=(60*array1[i][j]);
      else sum2[i]+=(1*array1[i][j]);
    }
    diff[i]=sum2[i]-sum1[i];                            //su khac nhau ve thoi gian
   // printf("%d ", diff[i]);
  }
  for(int i=0; i<a; i++)                          //doi nguoc lai ra ngay gio phut giay
  {
    int count=0;
    do{
      count++;
    }
    while(86400*count<=diff[i]);                  //ngay
    count--;
    printf("(%d ", count);
    diff[i]-=(count*86400);

    count=0;
    do{
      count++;
    }
    while(3600*count<=diff[i]);                 //gio
    count--;
    printf("%d ", count);
    diff[i]-=(count*3600);

    count=0;
    do{
      count++;
    } 
    while(60*count<=diff[i]);                 //phut
    count--;
    diff[i]-=(count*60);
    printf("%d ", count);

    printf("%d) ", diff[i]);                 //giay
  }
  //for(int i=0;i<a; i++) printf(" %d %d %d ",sum1[i], sum2[i], diff[i]);
  return 0;
}
