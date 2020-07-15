//快速排序
#include<iostream>
using namespace std;
void Qsort(int arr[],int low,int high)
{
    if (low<high)
    {
        int i=low,j=high,x=arr[low];
        while(i<j)
        {
            while(i<j&&arr[j]>=x) //从右向左找第一个小于x的数
             j--;
            if(i<j)
               arr[i++]=arr[j];
            
            while(i<j&&arr[i]<x) //从左向右找第一个大于等于x的数
             i++;
            if(i<j)
              arr[j--]=arr[i];
        }
        arr[i]=x;
        Qsort(arr,low,i-1);
        Qsort(arr,i+1,high);
    }
    
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
