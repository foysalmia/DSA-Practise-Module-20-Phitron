#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    arr[0]<0 ? arr[0] = 0 : arr[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        arr[i]<0 ? arr[i]=0 : arr[i] = arr[i] ;
        arr[i] = arr[i]+arr[i-1];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        (l==1) ? cout<<arr[r-1]<<endl : cout<<arr[r-1]-arr[l-2]<<endl;
    }
    return 0;
}
