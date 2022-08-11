#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        arr[i] = arr[i]+arr[i-1];
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(l==1)cout<<arr[r-1]<<endl;
        else cout<<arr[r-1]-arr[l-2]<<endl;
    }

    return 0;
}
