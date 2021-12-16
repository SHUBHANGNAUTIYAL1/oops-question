#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    int a;
    void get(int x)
    {
        a=x;
    }
    A operator |(A obj)
    {
        A temp;
        temp.a= a | obj.a;
        return temp;
    }
    void show()
    {
        cout<<a;
    }
};
int main()
{
A a1,a2,a3;
a1.get(2);
a2.get(3);

a3=a1|a2;
a3.show();

}