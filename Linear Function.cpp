#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,x1,x2,y1,y2,a,b;
    cin >> n;
    for(int i=0;i<n;i++)
        {
            cin >> x1;
            cin >> y1;
            cin >> x2;
            cin >> y2;
            a=(y2-y1)/(x2-x1);
            b=y1-a*x1;
        cout << "(" << a << " " << b << ") ";
        }
}
