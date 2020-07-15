//选数
#include<iostream>
using namespace std;
bool IsPrime(int n)
{
    if(n==2) return true;
    int t=1;
    for(int i=2;i*i<=n;i++)
     if (n%i==0)
     {
         t=0;
         break;
     }
    if(t==1) return true;
    else return false;
}
int n,k,sum,count=0;
void choose(int a[],int b[],int bit,int index)
{
    for (int i = index; i < n; i++)
    {
        b[bit]=a[i];
        if(bit<k-1) choose(a,b,bit+1,i+1);
        if(bit==k-1)
        {
            sum=0;
            for (int i = 0; i < k; i++)
             sum+=b[i];
            if(IsPrime(sum)) count++;
        }
    }
    
}
int main(int argc, const char** argv) {
    cin>>n>>k;
    int x[n],y[n]={0};
    for (int i = 0; i < n; i++)
     cin>>x[i];
    choose(x,y,0,0);
    cout<<count;
    system("pause");
    return 0;
}