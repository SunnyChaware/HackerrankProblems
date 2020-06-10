/*
* Author Sunny Chaware
* 10 June 2020
*/

#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n,clike=2,like=2;
    cin>>n;
    for(int i=2;i<=n;i++){
        like = (like*3)/2;
        clike += like;
    }
    cout<<clike<<endl;
}
