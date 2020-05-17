#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n; cin >> n;
    
    vector<int> vm;
    vector<char> vop;
    
    while(1)
    {
        char op; 
        int m;
        cin >> op >> m;
        vm.push_back(m);
        vop.push_back(op);
        if(op=='%') break;
    }
    
    int mod = vm.back();
    for(int i=0; i<vm.size()-1; ++i)
    {
        if(vop[i]=='+')
            n += vm[i];
        else
            n *= vm[i];
        n %= mod;
    }
    cout << n;
}
