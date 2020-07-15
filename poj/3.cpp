//阶乘之和
#include <iostream>
using namespace std;
int s[5000],t=1;
int sum[5000]={};
void jc(int x)
{
    for (int i = 0; i <=t; i++)
        s[i]*=x;
    for (int i = 0; i <=t; i++)
    {
        if(s[i]>=10)
        {
            long long add=s[i]/10;
            s[i+1]+=add;
            s[i]%=10;
            if(i+1>t) t=i+1;
        }
    }
}
int main(int argc, const char** argv) {
    int n;
    cin>>n;
    for (int i = 1; i <=n ; i++)
    {
        s[1]=1;
        for (int j = 1; j <=i; j++)
     {
        jc(j);
     }
          /*for (int j = t; j >=1; j--)
     {
        cout<<s[j];
     }
     cout<<endl;*/
       for(int k=1;k<5000;++k)
       {
           sum[k]+=s[k];
           sum[k+1]+=(sum[k]/10);
           sum[k]%=10;
       }
       for(int j=0;j<5000;++j) s[j]=0; //加完一个阶乘后要清0
    } 
   int q=4999;
    while (sum[q]==0)
      q--;   
    for (int i = q; i>=1 ; i--)
     cout<<sum[i];
    system("pause");
    return 0;
}