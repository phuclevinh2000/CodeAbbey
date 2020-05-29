#include <iostream>

using namespace std;

int main(){

    int arr;
        cin >> arr;
        while(arr--){
        long N;
            cin >> N;
        long a = 0;
        long b = 1 % N;
        long count(1);
        while(b > 0){
            long temp = a + b; a = b; b = temp;
            a %= N;
            b %= N;
            ++count;
        }
        cout << count << " ";
    }

    return 0;
}
