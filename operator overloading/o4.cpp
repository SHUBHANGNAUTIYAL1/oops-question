#include<bits/stdc++.h>
using namespace std;
class A
{ public:
    int a;

    void get(int x)
    {
        a=x;
    }
   friend istream & operator>>(istream &cin,A &obj);
friend ostream & operator<<(ostream &cout,A &obj );
};
istream & operator>>(istream &cin,A &obj)
{
    cin>>obj.a;
    return cin;
}
ostream & operator<<(ostream & cout,A obj)
{
    cout<<obj.a;
    return cout;
}
int main()
{
    A a1,a2;
    
    cin>>a1;
    cout<<a1;
}