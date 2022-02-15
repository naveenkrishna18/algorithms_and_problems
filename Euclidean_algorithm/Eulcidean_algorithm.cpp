#include <iostream>
using namespace std; 
int gcd(int a,int b)
{
    if(a%b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int a,b;
    cout<<"Enter First Number = ";
    cin>>a;
    cout<<"Enter Second Number = ";
    cin>>b;
    int result;
    result = gcd(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<result;
    return 0;
}

