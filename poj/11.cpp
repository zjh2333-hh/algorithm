//攀爬者
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
struct Point
{
    int x,y,z;
};
void Qsort(Point arr[],int s,int l)
{
    int mid=arr[(s+l)/2].z,i=s,j=l;
    while (i<=j)
    {
        while (arr[i].z<mid) i++;
        while (arr[j].z>mid) j--;
          if(i<=j)
    {
       swap(arr[j].x,arr[i].x);
       swap(arr[j].y,arr[i].y);
       swap(arr[j].z,arr[i].z);
        i++;
        j--;
    }
    }
  
    if(s<j) Qsort(arr,s,j);
    if(i<l) Qsort(arr,i,l);
}
int main(int argc, const char** argv) {
    int N;
    cin>>N;
    Point point[N];
    for (int i = 0; i < N; i++)
     cin>>point[i].x>>point[i].y>>point[i].z;
    /*for (int i = 0; i < N-1; i++)
     for (int j = 0; j < N-1-i ; j++)
       if(point[j].z>point[j+1].z)
          {
              swap(point[j].x,point[j+1].x);
              swap(point[j].y,point[j+1].y);
              swap(point[j].z,point[j+1].z);
          }   用冒泡排序会tle  */  
    Qsort(point,0,N-1);  
    double d[N-1],sum=0.0;
    for (int i = 0; i < N-1; i++)
        d[i]=sqrt(pow((point[i].x-point[i+1].x),2)+pow((point[i].y-point[i+1].y),2)+pow((point[i].z-point[i+1].z),2));
    for (int i = 0; i < N-1; i++)
     sum+=d[i];
    printf("%.3lf",sum);
    system("pause");
    return 0;
}