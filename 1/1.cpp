#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    int minMax = arr[m-1];
    int bigMax = arr[n-m];

    cout<<minMax<<" "<<bigMax;

    return 0;
}
