#include <stdio.h>
#include <math.h>
//ban co the dung char de so sanh
//bai nay ban phai input them 1 so nua bat ki, nhung ma no se khong anh huong toi ket qua
int main(void) {
  int secret,guess[100];
  float a ;
  float mot[100], hai[100], ba[100], bon[100];
  float doanmot[100], doanhai[100], doanba[100], doanbon[100];
  int trai[100], phai[100];
  scanf("%d %f",&secret, &a);
  for(int i=0; i<a; i++) 
  {
    scanf("%d ", &guess[i]);
    trai[i]=0;
    phai[i]=0;
  }
  for(int i=0; i<a; i++) 
  {  
    mot[i]=floor(secret/1000);                //phan tich so secret
    bon[i]=secret%10;
    ba[i]=floor((secret%100)/10);
    hai[i]=floor((secret%1000)/100);
    //printf("%d ", mot);

    doanmot[i]=floor(guess[i]/1000);                //phan tich so doan
    doanbon[i]=guess[i]%10;
    doanba[i]=floor((guess[i]%100)/10);
    doanhai[i]=floor((guess[i]%1000)/100);
   
   if(mot[i]==doanmot[i]) trai[i]++;              //co bao nhieu so dung cho dung vi tri
   if(ba[i]==doanba[i]) trai[i]++;
   if(bon[i]==doanbon[i]) trai[i]++;
   if(hai[i]==doanhai[i]) trai[i]++;

   if(mot[i]==doanhai[i]) phai[i]++;
   if(mot[i]==doanba[i]) phai[i]++;
   if(mot[i]==doanbon[i]) phai[i]++;
   if(hai[i]==doanmot[i]) phai[i]++;
   if(hai[i]==doanba[i]) phai[i]++;
   if(hai[i]==doanbon[i]) phai[i]++;
   if(ba[i]==doanhai[i]) phai[i]++;
   if(ba[i]==doanmot[i]) phai[i]++;
   if(ba[i]==doanbon[i]) phai[i]++;
   if(bon[i]==doanhai[i]) phai[i]++;
   if(bon[i]==doanba[i]) phai[i]++;
   if(bon[i]==doanmot[i]) phai[i]++;


   
  }

  for(int i=0; i<a; i++) 
  {
    //printf("%f %f %f %f \n",mot[i],hai[i],ba[i],bon[i]);
    printf("%d-%d ", trai[i], phai[i]);
  }
  return 0;
}
