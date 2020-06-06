/*
* Author Sunny CHaware
* 06 June 2020
*/


#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int budget,kb[1000],usb[1000],i,n,m,j;
    int result= -1;
    //  n for the keyboard
    // m for the USB
    cin>>budget>>n>>m;

    for(i=0;i<n;i++){
        cin>>kb[i];
    }
    for(i=0;i<m;i++){
        cin>>usb[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(kb[i]+usb[j]<=budget){
                result = max(result,kb[i] + usb[j]);
            }
        }
    }
    cout<<result<<endl;
}
