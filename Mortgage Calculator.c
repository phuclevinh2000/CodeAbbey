#include <stdio.h>
#include <math.h>

int main(void)
{
    float muon, lai, time, result=1, out;
    float a;

      scanf("%f %f %f", &muon, &lai, &time);        //dung cong thuc https://vietjack.com/toan-lop-12/dang-bai-toan-vay-von-tra-gop-co-loi-giai-chi-tiet.jsp
      //lai=lai/12;
      a=(lai/12)/100;                               //lai de cho la lai cho ca nam nen muon tinh thi phai chia cho 12
      lai=1+((lai/12)/100);
      //int result=1;
      for(; time>0; time--) 
      {
        result=result*lai;
        //lai=lai*time;
      }
      out=(muon*result*a)/(result-1);
      printf("%.0f", ceil(out));
    return 0;
}
