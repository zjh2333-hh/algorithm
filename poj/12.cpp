//三连击
#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, const char** argv) {
    int A,B,C,flag=1,t=0;
    cin>>A>>B>>C;
    int a[9];
    for (int i = 123; (i*B)%A==0&&(i*C)%A==0&&(i*C)/A<=987; i++)
    {
        a[0]=i%10;
        a[1]=(i/10)%10;
        a[2]=i/100;
        a[3]=(i*B/A)%10;
        a[4]=(i*B/(10*A))%10;
        a[5]=i*B/(100*A);
        a[6]=(i*C/A)%10;
        a[7]=(i*C/(10*A))%10;
        a[8]=i*C/(100*A);
        sort(a,a+9);
       for (int i = 0; i < 9; i++)
           if(a[i]!=i+1) 
             {
                 flag=0;
                 break;
             }
       if(flag==1)
        {
            cout<<i<<" "<<i*B/A<<" "<<i*C/A<<endl;
            t=1;//至少有一组输出
        }
        flag=1;
    }
    if(t==0)
     cout<<"No!!!";
    system("pause");
    return 0;
}
