#include <iostream>
#include <string.h>
using namespace std;
int n,m;
int main() {
	cin>>n>>m;
	int face[n],a[m],s[m];
	string job[n];
	int i;
	for(i=0;i<n;++i)
	 cin>>face[i]>>job[i];
    for(i=0;i<m;++i)
     cin>>a[i]>>s[i];
	int flag=0;   //�ӵ�һ��С�˿�ʼ 
	for(i=0;i<m;i++) 
	 {
	 	if(face[flag]!=a[i]) flag=(flag+s[i])%n;
	 	else  flag=(flag-s[i]+n)%n;
	  } 
	cout<<job[flag];
	return 0;
}
