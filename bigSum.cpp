#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int sum=0,n,i,arr[10];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>arr[i];

    for(i=0;i<n;i++){
        sum +=arr[i];
    }
    cout<<sum<<endl;
}
