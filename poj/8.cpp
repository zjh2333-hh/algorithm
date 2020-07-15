//另一种基准的快速排序
#include<iostream>
using namespace std;
void Qsort(int arr[],int s,int l)
{
    int mid=arr[(s+l)/2],i=s,j=l;
    while (i<=j)
    {
        while (arr[i]<mid) i++;
        while (arr[j]>mid) j--;
          if(i<=j)
    {
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
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
    int a[N];
    for (int i = 0; i < N; i++)
     cin>>a[i];
    Qsort(a,0,N-1);
    for (int i = 0; i < N; i++)
    {
        cout<<a[i];
        if(i<N-1) cout<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}
