#include <iostream>
using namespace std; 
int n,m;
int flag=0;
int main() {
	cin>>n>>m;
	char a[n][m];
	int i,j;
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	    cin>>a[i][j];
	for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	    if(a[i][j]=='?')
		 {
		   if(i>0&&a[i-1][j]=='*') flag++;
		   if(i<n-1&&a[i+1][j]=='*') flag++;
		   if(j>0&&a[i][j-1]=='*') flag++;
		   if(j<m-1&&a[i][j+1]=='*') flag++;
		   if(i>0&&j<m-1&&a[i-1][j+1]=='*') flag++;
		   if(i<n-1&&j<m-1&&a[i+1][j+1]=='*') flag++;
		   if(i<n-1&&j>0&&a[i+1][j-1]=='*') flag++;
		   if(i>0&&j>0&&a[i-1][j-1]=='*') flag++;
		   a[i][j]=flag+48;
		   flag=0;
		 }
		for(i=0;i<n;i++)
	   for(j=0;j<m;j++)
	    {
		cout<<a[i][j];
		if(j==m-1) cout<<endl;
	    }
	return 0;
}
