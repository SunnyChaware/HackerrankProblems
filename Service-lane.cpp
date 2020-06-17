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
    long long int n,t,min,entry,exit;
    long long int a[100000];
    cin>>n>>t;
    for (int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<t;i++){
        cin>>entry>>exit;
        min = a[entry];
        for(int i=entry;i<=exit;i++){
            if(a[i]<min)min=a[i];
        }
        cout<<min<<endl;
    }
}
