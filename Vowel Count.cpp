#include <iostream>
#include <string>
using namespace std;

int main(){
char s[1000][100];
int n, k = 0;
cin >> n;
for (int i = 0; i<=n; i++){
cin.getline(s[i],1000);
}
for (int i = 1; i<=n; i++){
 for (int j = 0; j<sizeof(s[i]); j++){
     if ((s[i][j]=='a') || (s[i][j]=='o') || (s[i][j]=='i') || (s[i][j]=='u') ||
     (s[i][j]=='e') || (s[i][j]=='y')) {
         k+=1;
     } 
 }
 cout << k << " ";
 k = 0;
}
return 0;
}
