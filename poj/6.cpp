//p1781宇宙总统
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(int argc, const char** argv) {
    int n;
    cin>>n;
    string s[n],b[n];
    for (int i = 0; i < n; i++)
      {
      cin>>s[i];
      b[i].assign(s[i]);
      }
    for (int i = 0; i < n-1; i++)
     for(int j=0;j<n-i-1;j++)
       if(s[j].length()>s[j+1].length()||(s[j].length()==s[j+1].length()&&s[j].compare(s[j+1])>0))
          {
              string temp;
              temp.assign(s[j]);
              s[j].assign(s[j+1]);
              s[j+1].assign(temp);
          }
    int index=0;
    for (int i = 0; i < n; i++)
      if (b[i].compare(s[n-1])==0)
      {
          cout<<i+1<<endl;
      }
    cout<<s[n-1];
    system("pause");
    return 0;
}