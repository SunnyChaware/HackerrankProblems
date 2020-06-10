/*
* Author Sunny Chaware
* 10 June 2020
*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n,k,a,count = 0;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(a <= 0)count++;
        }
        if(count >= k)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
