//& overloading
#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    int a;
   void getdata(int x)
   {
       a=x;
       
   }
   int operator &(A obj)
   {
return a & obj.a; 
    
   }
   void showdata()
   {
       cout<<a;
   }


};
int main()
{
A obj1,obj2;
obj1.getdata(15);
obj2.getdata(9);
int x= obj1&obj2;
cout<<x;
}