#include <iostream>
#include <cmath> 
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<=n;++i)
	 cin>>a[i];
	int k=0;
    while(a[k]==0)
    k++;
    //��ʱkΪ��һ����Ϊ0����
	if(k==n) cout<<a[k];
    else if(k<n)
    {
       if(a[k]==1&&k<n-1) cout<<"x^"<<n-k;
       else if(a[k]>1&&k<n-1) cout<<a[k]<<"x^"<<n-k;
       else if(a[k]==-1&&k<n-1) cout<<"-x^"<<n-k;
       else if(a[k]<-1&&k<n-1)  cout<<a[k]<<"x^"<<n-k;
       else if(a[k]==1&&k==n-1)  cout<<"x";
       else if(a[k]>1&&k==n-1)   cout<<a[k]<<"x";
       else if(a[k]==-1&&k==n-1) cout<<"-x";
       else if(a[k]<-1&&k==n-1)  cout<<a[k]<<"x";//���� 
       for(int i=k+1;i<n;i++)
       {
       		if(a[i]==1&&i<n-1) cout<<"+x^"<<n-i;
       else if(a[i]>1&&i<n-1) cout<<'+'<<a[i]<<"x^"<<n-i;
       else if(a[i]==-1&&i<n-1) cout<<"-x^"<<n-i;
       else if(a[i]<-1&&i<n-1)  cout<<a[i]<<"x^"<<n-i;
       else if(a[i]==1&&i==n-1)  cout<<"+x";
       else if(a[i]>1&&i==n-1)   cout<<'+'<<a[i]<<"x";
       else if(a[i]==-1&&i==n-1) cout<<"-x"; 
       else if(a[i]<-1&&i==n-1)  cout<<a[k]<<"x";
	   } //�м��һ��������� 
	if(a[n]>0) cout<<"+"<<a[n];
	else if(a[n]<0) cout<<a[n]; 	//β�� 
	}
	return 0;
}
