//回文质数
#include<iostream>
#include<cmath>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
bool isprime(int n)
{
    int flag=1;
    if(n==2) return true;
    for (int i = 2; i*i <= n; i++)
     if(n%i==0) 
      {
          flag=0;
          break;
      }
    if(flag==1) return true;
    else return false;
}
bool ok(int k)   //回文数
{     
        int a[10],i=0;     
        while (k>0){a[i]=k%10;k/=10;i++;}
        for(int j=0;j<i;j++)if(a[j]!=a[i-j-1])return false;   
        return true;     
}
bool ws(int k)  //位数
{
        if(k>=10 && k<100 && k!=11 || k>=1000 && k<10000)return false;
        if(k>=100000 && k<1000000 || k>=10000000 && k<100000000)return false;
        return true;
}    
int main(int argc, const char** argv) {
    int a,b;
    cin>>a>>b;
    if(a%2==1)
    {
        for (int i = a; i <= b; i+=2)
        if(ws(i))
         if(ok(i))
          if (isprime(i))
            cout<<i<<endl;
    }
    if(a%2==0)
   {
        for (int i = a+1; i <= b; i+=2)
        if(ws(i))
         if(ok(i))
          if (isprime(i))
            cout<<i<<endl;
    } 
    system("pause");
    return 0;
}
