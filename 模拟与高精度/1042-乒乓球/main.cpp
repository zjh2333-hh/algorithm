#include <iostream>
#include <string.h>
using namespace std; 
int a[100000];
int w,l;
int main() {
	memset(a,0,sizeof(a)/sizeof(*a));
	char s;
	int i=0;
	while(cin>>s&&s!='E')
	{
		if(s=='W') a[i++]=1;
		else a[i++]=-1; 
	}
	for(i=0;;++i)
	{
		if(a[i]==1) w++;
		else if(a[i]==-1) l++;
		else if(a[i]==0){
			cout<<w<<":"<<l<<endl;
			break; 
		}
		if(l-w>=2||w-l>=2)
		   if(l>=11||w>=11){
		   	cout<<w<<":"<<l<<endl;
		   	w=0;
		   	l=0;
		   }
		   
	}
	w=0; l=0;
	cout<<endl;
		for(i=0;;++i)
	{
		if(a[i]==1) w++;
		else if(a[i]==-1) l++;
		else if(a[i]==0){
			cout<<w<<":"<<l<<endl;
			break; 
		}
		if(l-w>=2||w-l>=2)
		   if(l>=21||w>=21){
		   	cout<<w<<":"<<l<<endl;
		   	w=0;
		   	l=0;
		   }
		   
	}
	return 0;
}
