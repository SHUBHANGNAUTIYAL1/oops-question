#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    int j=s.size()-3;
    int count=0;
    while(i!=s.size()-3/2)
    {
      if(s[i]==s[j])
      {
          count++;
          if(count>1)
          {
              cout<<"palindrone exist";
              return 0;
          }
          i++;
          j--;
      }
      else if(s[i]!=s[j])
      {
          count=0;
          i++;


      }

    }
    cout<<"palindrone doesnt exist";
    
}