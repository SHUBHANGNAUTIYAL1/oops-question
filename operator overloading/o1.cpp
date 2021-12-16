#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    int a,b;
   void getdata(int x,int y)
   {
       a=x;
       b=y;
   }
   A operator +(A obj)
   {
   A temp;
   temp.a=a+obj.a;
   temp.b=b+obj.b;
   return temp;
   }
   void showdata()
   {
       cout<<a<<" "<<b;
   }


};
int main()
{
A obj1,obj2;
obj1.getdata(1,2);
obj2.getdata(1,2);
A obj3=obj1+obj2;
obj3.showdata();

}