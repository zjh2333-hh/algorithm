#include <iostream>
using namespace std; 
char s[10][10];
int f1,f2,c1,c2;
int t,flag=0;
int node_f=0,node_c=0;
int main() {
	for(int i=0;i<10;++i)
	 for(int j=0;j<10;++j)
	  {
	  cin>>s[i][j];
	  if(s[i][j]=='F')
	   {
	   s[i][j]='.';
	   f1=i;
	   f2=j;
       }
     if(s[i][j]=='C')
     {
       s[i][j]='.';
	   c1=i;
	   c2=j;
	 }
   }
for(t=0;t<100000;++t){
   if(node_f==0) //北 
   	{
   	    if(f1>0)
		 {
			if(s[f1-1][f2]!='*')
				 f1--;
			else node_f=1;
		}
		else node_f=1;	
	}
	else if(node_f==1) //东 
		 {
		 	  if(f2<9)
		 	   {
				if(s[f1][f2+1]!='*')
				 f2++;
				else node_f=2;
		        }
			 else node_f=2;	
	    }
   else if(node_f==2) //南 
		 {
		 	  if(f1<9)
		 	   {
				if(s[f1+1][f2]!='*')
				 f1++;
				else node_f=3;
		        }
			 else node_f=3;	
	     }
   else if(node_f==3) //西 
		 {
		 	  if(f2>0)
		 	   {
				if(s[f1][f2-1]!='*')
				 f2--;
				else node_f=0;
		        }
			 else node_f=0;	
	    }  
   	if(node_c==0) 
		 {
		 	  if(c1>0)
		 	   {
				if(s[c1-1][c2]!='*')
				 c1--;
				else node_c=1;
		        }
			 else node_c=1;	
	    }
	else if(node_c==1)
		 {
		 	  if(c2<9)
		 	   {
				if(s[c1][c2+1]!='*')
				 c2++;
				else node_c=2;
		        }
			 else node_c=2;	
	    }
	else if(node_c==2)
		 {
		 	  if(c1<9)
		 	   {
				if(s[c1+1][c2]!='*')
				 c1++;
				else node_c=3;
		        }
			 else node_c=3;	
	  }
	else if(node_c==3)
		 {
		 	  if(c2>0)
		 	   {
				if(s[c1][c2-1]!='*')
				 c2--;
				else node_c=0;
		        }
			 else node_c=0;	
	   }  
if(c1==f1&&c2==f2) 
{
	flag=1; break;
}
}
if(flag==1) cout<<t+1;
else cout<<'0';
	return 0;
}
