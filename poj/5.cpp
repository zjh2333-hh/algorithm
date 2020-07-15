//p1059明明的随机数
#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, const char** argv) {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin>>a[i];
    sort(a,a+n);
    int k=n;
    for (int i = 0; i < n-1; i++)
      if(a[i+1]==a[i]) k--;
    cout<<k<<endl;
    cout<<a[0]<<" ";
    for (int i = 1; i < n; i++)
     if(a[i]!=a[i-1]) cout<<a[i]<<" ";
    system("pause");
    return 0;
}
