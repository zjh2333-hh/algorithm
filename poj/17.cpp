//拼木棒

/*#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int n,num=0;
void choose(int a[],int b[],int bit,int index)
{
    for (int i = index; i < n; i++)
    {
        b[bit]=a[i];
        if(bit<3) choose(a,b,bit+1,i+1);
        if(bit==3)
        {
            sort(b,b+4);
            if(b[3]==b[2]&&b[2]==b[1]+b[0])  
              num=(num+1)%(int(pow(10,9))+7);
        }
    }
}
int main(int argc, const char** argv) {
    cin>>n;
    int x[n],y[n]={0};
    for (int i = 0; i < n; i++)
      cin>>x[i];
    choose(x,y,0,0);
    cout<<num;
    system("pause");
    return 0;
}   考虑了所有组合，tle*/

# include <cstdio>
# include <iostream>
# include <algorithm>
using namespace std;
const int N=100005;
const int mod=1e9+7;
int n,a[N],f[N],sum;
int s=1e9,e=-1e9;//分别是最小最大长度
long long ans;

int main () {
	scanf ("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf ("%d",&a[i]);
		s=min(s,a[i]);
		e=max(e,a[i]);
		f[a[i]]++;//记录该长度出现次数
	}
	for (int i=s+1;i<=e;i++) {  
		if (f[i]<=1) continue;//不可能组成三角
		for (int j=s;j<=i/2;j++)
			if (f[j]&&f[i-j])//能组成三角
				if (j!=i-j)
					ans=ans+((f[i]*(f[i]-1)>>1)*f[j]*f[i-j])%mod;//次数不相等
				else if (f[j]>=2)
					ans=ans+((f[i]*(f[i]-1)>>1)*(f[j]*(f[j]-1)>>1)%mod)%mod;//直接f[j]中取2
	}
	printf ("%lld\n",ans%mod);//输出即结束
	return 0;
}