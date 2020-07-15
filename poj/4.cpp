//p1271 选举学生会
#include <iostream>
#include<algorithm>
using namespace std;
 int main(int argc, const char** argv) {
     int n,m,s;
     cin>>n>>m;
     int b[m];
     for (int i = 0; i < m; i++)
          cin>>b[i]; 
    sort(b,b+m);
    for (int i = 0; i <m; i++)
       cout<<b[i]<<" ";
    system("pause"); 
    return 0;
}