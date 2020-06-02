/*
Author = Sunny chaware
Made on = 02 June 2020
*/

#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int arr[100], n , i , k , j ;
    int count = 0;

    // taking the values of n and k
    // n is the integer length of array
    // k is the integer for division
    // cout<<"Enter n and k"<<endl;
    cin>> n >> k ;

    // taking array as an input
    for (i=0;i<n;i++){
        cin>>arr[i];
    }
    
    // looping through the array
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            // checking the condition
            if((arr[i] + arr[j]) % k == 0){
                count += 1;
            }
        }
    }
    cout<<count;
}
