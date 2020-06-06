/*
*Author Sunny Chaware
*06 June 2020
*/

#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int quries,i;
    cin>>quries;

    for(i=0;i<quries;i++){
        int x,y,z;
        cin>> x >> y >> z;
        if(abs(x-z) < abs(y-z)){
            cout<<"Cat A"<<endl;
        }
        else if(abs(y-z) < abs(x-z)){
            cout<<"Cat B"<<endl;
        }
        else{
            cout<<"Mouse C"<<endl;
        }
    }

}
