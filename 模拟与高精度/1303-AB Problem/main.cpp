#include <iostream>
#include <string.h>
using namespace std; 
string a,b;
int s1[2002],s2[2002],c[4002];
int main() {
    cin>>a>>b;
    int lena,lenb;
    lena=a.length();
    lenb=b.length();
    if(a[0]=='0'||b[0]=='0')
     {
	 cout<<'0';
	 return 0;
    }
    //�����0�����
	if(lena<lenb||lena==lenb&&a[0]<b[0])
	{
		swap(a,b);
		swap(lena,lenb);
	}
	//�ѽ϶̵�������b��
	 for(int i=1;i<=lena;++i)
	     s1[i]=a[lena-i]-'0';
	 for(int i=1;i<=lenb;++i)
	     s2[i]=b[lenb-i]-'0';
	//���ַ���ת��Ϊ�������鲢���򴢴�
	for(int i=1;i<=lenb;i++)
	 for(int j=1;j<=lena;j++)
	  {
	  	c[i+j-1]+=s2[i]*s1[j];
	  	c[i+j]+=c[i+j-1]/10;
	  	c[i+j-1]=c[i+j-1]%10;
	   } 
	//�ؼ���ģ����ʽ�˷�
	int lenc=lena+lenb;
	while(lenc>0&&c[lenc]==0)
	 {
	   lenc--;
     }
     //��ȥ��ͷ��0
	 for(int i=lenc;i>=1;--i)
	  cout<<c[i]; 
	return 0;
}
