/*
* Author Sunny Chaware
* 06 June 2020
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int a[100],i,height,n;
    int max=a[0],result=0;

    cin>>n;
    cin>>height;
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    if(height>max){
        cout<<"0"<<endl;
    }
    else{
        result = max-height;
        cout<<result;
    }
}
