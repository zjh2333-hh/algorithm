//求第k小的数
#include<iostream>
#include<stdio.h>
using namespace std;
int arr[5000005],k;
void Qsort(int s,int l)
{
    int mid=arr[(s+l)/2],i=s,j=l;
    do
    {
        while (arr[j]>mid) j--;
        while (arr[i]<mid) i++;
          if(i<=j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    }
    while(i<=j);
    //区间分为三部分s<=j<=i<=l
    if(k<=j) Qsort(s,j);
    else if(k>=i) Qsort(i,l);
    else 
    {
        cout<<arr[j+1];
        return;
    }
}
int main() {
    int N;
    cin>>N>>k;
    for (int i = 0; i < N; i++)
     scanf("%d",&arr[i]); //scanf比cin更高效
    Qsort(0,N-1);
    system("pause");
    return 0;
}