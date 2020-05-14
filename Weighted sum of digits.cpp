
#include<iostream>
#include<string>
int wsd(std::string);

int main()
{
using std::cin;
using std::cout;

int counter{0};
cin>>counter;
std::string number;

while(counter--)
{
    cin>>number;
    cin.get();
    cout<<wsd(number)<<" ";
    
}

}

int wsd(std::string number)
{
    char *wsk=&number[0];
    int sum{0},counter{1};
    while(*wsk)
    {
    sum+=((int)(*wsk)-48)*counter;
    wsk++;
    counter++;
    }

    return sum;
}
