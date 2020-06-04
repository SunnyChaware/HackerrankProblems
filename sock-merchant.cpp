/*
Author -Sunny Chaware
04 June 2020
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int a[100],n,i,pair;
    int count=0;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]!=0){
             for(int j=i+1; j<n; j++){
                if(a[i]==a[j]){
                    count++;
                    a[j]=0;
                    break;
                    }
                }
        }
    }
    cout<<count;
}
