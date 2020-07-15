#include <iostream>
using namespace std;
int n;
long long sum=0,i=2,j=0,t=1;
int a[10001]={},s[10001]={};
void jc(int x)
{   //t表示位数
    for (int i=1;i<=t;++i)
      s[i]*=x;
    for (int i=1;i<=t;++i)
    {
        if(s[i]>=10)
        {
           long long add=s[i]/10;
           s[i+1]+=add;
           s[i]%=10; 
           if(i+1>t) t=i+1;  //进位
        }
    }
}
int main() {
    cin>>n;
    while (sum<n)
    {
        a[++j]=i;
        sum+=i;
        i++;
    }
    a[sum-n-1]=0;
    s[1]=1; 
    for(int k=1;k<=j;++k)
    {
        if(a[k]!=0) cout<<a[k]<<' ';
        if(a[k]!=0) jc(a[k]);
    }
    cout<<endl;
    for(int k=t;k>=1;--k)
     cout<<s[k];
    return 0;
}

