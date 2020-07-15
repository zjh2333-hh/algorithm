//组合的输出
#include<iostream>
#include<iomanip>
using namespace std;
int n,k;
void cb(int a[],int b[],int bit,int index)
{
    for (int i = index; i < n; i++)
    {
        b[bit]=a[i];
        if(bit<k-1) cb(a,b,bit+1,i+1);
        if(bit==k-1) 
         for (int j = 0; j < k; j++)
               {
                   cout<<setw(3)<<b[j];  //固定场宽(默认右对齐)
                   if(j==k-1) cout<<endl;
               }
        
    }
    
}
int main(int argc, const char** argv) {
    cin>>n>>k;
    int x[n],y[n]={0};
    for (int i = 0; i < n; i++)
      x[i]=i+1;
    cb(x,y,0,0);
    system("pause");
    return 0;
}