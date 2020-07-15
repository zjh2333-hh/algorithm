#include <iostream>
#include <string> 
#include <vector>
using namespace std;
int p1,p2,p3;
string s;
vector<char> c; //存放修改后的字符串 
int main() {
	cin>>p1>>p2>>p3>>s;
	for(int i=0;i<s.size();++i)
	{
	  if(s[i]!='-')	c.push_back(s[i]);
	  else if((i==0||i==s.length()-1)&&s[i]=='-') c.push_back(s[i]); //-在开头和末尾保留 
	  else if(s[i]=='-'&&(s[i-1]=='-'||s[i+1]=='-')) c.push_back('-'); //连续的-保留 
	  else if(s[i]=='-')
	  {
	  	if(s[i-1]>=s[i+1]||(s[i-1]<58&&s[i+1]>96)) c.push_back('-'); //以下两种情况不拆：左边为数字，右边为字母；左边和右边同为数字和字母但左边不小于右边 
	  	else if(s[i+1]==s[i-1]+1) continue;
	  	else {
	  		if(p1==3)
	  		 for(int j=s[i-1]+1;j<s[i+1];++j)
	  		   for(int k=1;k<=p2;++k) 
	  		    c.push_back('*');
	  		else if(s[i+1]>=48&&s[i+1]<=57&&s[i-1]>=48&&s[i-1]<=57) //同为数字 
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
		    else if(s[i+1]>=97&&s[i+1]<=122&&s[i-1]>=97&&s[i-1]<=122) //同为字母 
			{
			 if(p1==1){ //小写 
			 	if(p3==1)
			 	 for(int j=s[i-1]+1;j<s[i+1];j++) 
	  			  for(int k=1;k<=p2;++k)
	  			    c.push_back(char(j));
	  			else if(p3==2)
	  			  for(int j=s[i+1]-1;j>s[i-1];j--) 
	  			   for(int k=1;k<=p2;++k)
	  			    c.push_back(char(j));
			 }
			 if(p1==2){//大写 
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
