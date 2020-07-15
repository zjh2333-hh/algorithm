//奖学金
#include<iostream>
#include<algorithm>
using namespace std;
struct Student
{
    int No,c,m,e,s;
};
int main(int argc, const char** argv) {
    int n;
    cin>>n;
    Student student[n];
    for (int i = 0; i < n; i++)
     {
         student[i].No=i+1;
         cin>>student[i].c>>student[i].m>>student[i].e;
         student[i].s=student[i].c+student[i].m+student[i].e;
     }
     for(int k=0;k<n-1;k++){
        for(int j=0;j<n-1-k;j++){
          if(student[j].s<student[j+1].s||(student[j].s==student[j+1].s&&student[j].c<student[j+1].c))
           {
               swap(student[j].No,student[j+1].No);
               swap(student[j].c,student[j+1].c);
               swap(student[j].m,student[j+1].m);
               swap(student[j].e,student[j+1].e);
               swap(student[j].s,student[j+1].s);
           }
        }
     }
    for (int i = 0; i < 5; i++)
    {
       cout<<student[i].No<<" "<<student[i].s<<endl;
    }
    system("pause");
    return 0;
}