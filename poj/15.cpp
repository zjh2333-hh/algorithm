//涂国旗
#include<iostream>
using namespace std;
int differ(string s,char c)
{
    int l=s.length(),count=0;
    for (int i = 0; i < s.length(); i++)
      if(s[i]!=c) 
        count++;
    return count;
}
int main(int argc, const char** argv) {
    int N,M;
    cin>>N>>M;
    string color[N];
    for (int i = 0; i < N; i++)
      cin>>color[i];
    int min=M*N;
    for(int k=1;k<N-1;k++)
      for (int l = k+1; l < N; l++)
      {//k表示B开始的行数，l表示R开始的行数
         int num=0;
         for(int i=0;i<k;i++)
           num+=differ(color[i],'W');
         for(int i=k;i<l;i++)
           num+=differ(color[i],'B');
        for(int i=l;i<N;i++)
           num+=differ(color[i],'R');
        if(num<min) min=num;
      }
    cout<<min;  
    system("pause");
    return 0;
}