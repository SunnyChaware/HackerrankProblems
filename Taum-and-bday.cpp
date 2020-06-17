/*
* Author Sunny Chaware
* 17 June 2020
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    long long b,w,bc,wc,z,n,t;

    cin>>t;
    while(t--){
        int result=0;
        cin>>b>>w;
        cin>>bc>>wc>>z;

        if(bc==wc)cout<<(b*bc)+(w*wc)<<endl;
        else if((bc+z)<wc)cout<<((b*bc)+(w*bc)+(w*z))<<endl;
        else if((wc+z)<bc)cout<<((b*wc)+(w*wc)+(b*z))<<endl;
        else cout<<(b*bc)+(w*wc)<<endl;

    }
}

