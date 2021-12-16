// not equal to
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
   bool operator !=(A obj)
   {
if(a!=obj.a)
return 0;
return 1;
    
   }
   void showdata()
   {
       cout<<a;
   }


};
int main()
{
A obj1,obj2;
obj1.getdata(9);
obj2.getdata(9);
int x= obj1!=obj2;
cout<<x;
}