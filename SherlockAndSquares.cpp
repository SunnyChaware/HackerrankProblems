#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a,b,count=0;
        cin>>a>>b;
        for(int i=1;i<=b;i++){
            if(i*i>b){
                break;
            }
            if(i*i<=b && i*i>=a){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
