#include <iostream>
#include <string> 
#include <vector>
using namespace std;
int p1,p2,p3;
string s;
vector<char> c; //����޸ĺ���ַ��� 
int main() {
	cin>>p1>>p2>>p3>>s;
	for(int i=0;i<s.size();++i)
	{
	  if(s[i]!='-')	c.push_back(s[i]);
	  else if((i==0||i==s.length()-1)&&s[i]=='-') c.push_back(s[i]); //-�ڿ�ͷ��ĩβ���� 
	  else if(s[i]=='-'&&(s[i-1]=='-'||s[i+1]=='-')) c.push_back('-'); //������-���� 
	  else if(s[i]=='-')
	  {
	  	if(s[i-1]>=s[i+1]||(s[i-1]<58&&s[i+1]>96)) c.push_back('-'); //������������������Ϊ���֣��ұ�Ϊ��ĸ����ߺ��ұ�ͬΪ���ֺ���ĸ����߲�С���ұ� 
	  	else if(s[i+1]==s[i-1]+1) continue;
	  	else {
	  		if(p1==3)
	  		 for(int j=s[i-1]+1;j<s[i+1];++j)
	  		   for(int k=1;k<=p2;++k) 
	  		    c.push_back('*');
	  		else if(s[i+1]>=48&&s[i+1]<=57&&s[i-1]>=48&&s[i-1]<=57) //ͬΪ���� 
	  		{
	  			if(p3==2)
	  			for(int j=s[i+1]-1;j>s[i-1];j--) 
	  			  for(int k=1;k<=p2;++k)
	  			    c.push_back(char(j));
	  			else if(p3==1)
	  			for(int j=s[i-1]+1;j<s[i+1];j++) 
	  			  for(int k=1;k<=p2;++k)
	  			    c.push_back(char(j));
			  }
		    else if(s[i+1]>=97&&s[i+1]<=122&&s[i-1]>=97&&s[i-1]<=122) //ͬΪ��ĸ 
			{
			 if(p1==1){ //Сд 
			 	if(p3==1)
			 	 for(int j=s[i-1]+1;j<s[i+1];j++) 
	  			  for(int k=1;k<=p2;++k)
	  			    c.push_back(char(j));
	  			else if(p3==2)
	  			  for(int j=s[i+1]-1;j>s[i-1];j--) 
	  			   for(int k=1;k<=p2;++k)
	  			    c.push_back(char(j));
			 }
			 if(p1==2){//��д 
			  	if(p3==1)
			 	 for(int j=s[i-1]+1;j<s[i+1];j++) 
	  			  for(int k=1;k<=p2;++k)
	  			    c.push_back(char(j-32));
	  			else if(p3==2)
	  			  for(int j=s[i+1]-1;j>s[i-1];j--) 
	  			   for(int k=1;k<=p2;++k)
	  			    c.push_back(char(j-32));
		  }
	  }
	} 
  } 
}
for(int i=0;i<c.size();++i) cout<<c[i];
	return 0;
}
