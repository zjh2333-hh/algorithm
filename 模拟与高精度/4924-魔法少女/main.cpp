#include <iostream>
using namespace std; 
int a[600][600];
void magic(int x,int y,int r,int z)
{
	if(z==0)
	{
		for(int i=x-r;i<=x;++i)
		 for(int j=y-r;j<y;j++)
		  {
		  	int temp;
		  	 temp=a[-j+x+y][-x+y+i];
		  	 a[-j+x+y][-x+y+i]=a[2*x-i][2*y-j];
		  	 a[2*x-i][2*y-j]=a[j+x-y][x+y-i];
		  	 a[j+x-y][x+y-i]=a[i][j];
		  	 a[i][j]=temp;
		  }
	}
	if(z==1)
	{
	  for(int i=x-r;i<=x;++i)
		 for(int j=y-r;j<y;j++)
		  {
		  	int temp;
		  	 temp=a[i][j];
		  	a[i][j]=a[j+x-y][x+y-i];
		  	a[j+x-y][x+y-i]=a[2*x-i][2*y-j];
		  	a[2*x-i][2*y-j]=a[-j+x+y][-x+y+i];
			a[-j+x+y][-x+y+i]=temp;
		  }
	}	  
}
int main() {
	int n,m;
   cin>>n>>m;
for(int i=1;i<=n;++i)
 for(int j=1;j<=n;++j)
  a[i][j]=n*(i-1)+j;
 int x[m],y[m],r[m],z[m];
 for(int k=0;k<m;++k)
  {
  cin>>x[k]>>y[k]>>r[k]>>z[k];
  magic(x[k],y[k],r[k],z[k]);
 }
for(int i=1;i<=n;++i)
 for(int j=1;j<=n;++j)
 {
 	cout<<a[i][j];
 	if(j<n) cout<<' '; 
 	if(j==n) cout<<endl;
  } 
 return 0;
}
