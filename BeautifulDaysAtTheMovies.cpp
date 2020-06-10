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
    long long x,y,z,count=0;
    cin>> x >> y >> z;

    for(int i=x;i<=y;i++){

        int temp=0,rem,rnum=0;
        temp = i;
        while(temp!=0){
            rem = temp%10;
            rnum = rnum*10 + rem;
            temp /= 10;
        }
        if(abs(i-rnum)%z==0)count++;
    }
    cout<<count<<endl;
}
