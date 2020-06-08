/*
* Author Sunny Chaware
* 08 June 2020
*/
#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int c[25],k,n,i;
    int e = 100;

    // inputs
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>c[i];
    }

    //logic
    i = 0;
        do{
            e--;

            i = (i+k)%n;

            if(c[i]== 1){
                e -= 2;
            }
        }while(i!=0);
    cout<<e<<endl;

}
