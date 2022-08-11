#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i] = i+1;
        if(isPrime(arr[i]))cout <<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
