#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int a[100000],i,n,k,brian_charged;
    int total = 0;

    // number and food item
    cin>>n>>k;

    for (i=0;i<n;i++){
        cin>>a[i];
    }
    // amount charged by the brian
    cin>>brian_charged;

    for(i=0;i<n;i++){
        if(a[i]==a[k]){
            continue;
        }else{
            total = total + a[i];
        }
    }
    // cout<<total;
    int brian_actual = (total)/2;

    int overcharged_amount = brian_charged - brian_actual;

    if(overcharged_amount==0){
        cout<<"Bon Appetit";
    }
    else{
        cout<<overcharged_amount;
    }
}
