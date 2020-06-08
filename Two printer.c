#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   long long X, Y, N;
   cin>>X>>Y>>N;
   long long res=LLONG_MAX;
   for(long long i=1; i<N; i++)
   {
       long long t1 = X * i;
       long long t2 = Y * (N-i);
       res = min(res, max(t1, t2));
   }
    cout<<res<<" \n";
   }
}
