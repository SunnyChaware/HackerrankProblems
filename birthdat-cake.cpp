
#include<iostream>
using namespace std;
int main(){
    int long i,n,max=0;
    cin>>n;                //number of candles

    int a[n];
    int long count =0;

    for(i=0;i<n;i++){     //checking the max number
        cin>>a[i];
        if(max<a[i]){
            max=a[i];
        }
    }
    for(i=0;i<n;i++){     //checking if there is any number matching the
        if(a[i]==max){    //max no.
            count++;
        }
    }
    cout<<count;
}
