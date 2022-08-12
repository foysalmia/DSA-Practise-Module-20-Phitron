#include<bits/stdc++.h>

using namespace std;

int BinarySearch(int a[],int x,int lb,int up)
{
    if(lb<=up)
    {
        int mid = (lb+up)/2;
        if(x==a[mid])
            return mid;
        else if(x<a[mid])
            return BinarySearch(a,x,lb,mid-1);
        else
            return BinarySearch(a,x,mid+1,up);
    }
    else
    {
        return -1;
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int index = BinarySearch(arr,k,0,n-1);

    if(index == -1) cout<<"NOT FOUND"<<endl;
    else cout<<index+1<<endl;


    return 0;
}
