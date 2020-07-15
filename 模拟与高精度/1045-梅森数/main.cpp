#include <iostream>
#include <cmath> 
#include <string.h>
using namespace std; 
long long num[510];
long long pow2(int a)
{
	long long res=1;
	for(int i=1;i<=a;++i)
	 res*=2;
	 return res;
}  //pow2(a) ¼ÆËã2^a 
int main() {
	int p,l;
	cin>>p;
	l=p*log10(2)+1; //Î»Êý 
	cout<<l<<endl;
	int t=p/32;
	int r=p-t*32;
	memset(num,0,sizeof(num));
	num[500]=1;
	long long c=pow2(32);
	for(int i=1;i<=t;++i)
	{
		for(int j=500;j>=1;j--)
		 num[j]*=c;
		for(int j=500;j>=1;j--)
		 {
		  num[j-1]+=num[j]/10;
		  num[j]%=10;
	     }
	}
	for(int i=1;i<=r;++i)
	{
		for(int j=500;j>=1;j--)
		 num[j]*=2;
		for(int j=500;j>=1;j--)
		 {
		  num[j-1]+=num[j]/10;
		  num[j]%=10;
	     }
	}
	num[500]--;
	for(int i=1;i<=500;i++)
	 {
	 	cout<<num[i];
	 	if(i%50==0) cout<<endl;
	 }
	return 0;
}
