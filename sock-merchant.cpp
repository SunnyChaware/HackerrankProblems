#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    int c[100],n,i,pair;
    int count=0;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>c[i];
    }

    for(int i=0; i<n; i++){
        if(c[i]!=0){
             for(int j=i+1; j<n; j++){
                if(c[i]==c[j]){
                    count++;
                    c[j]=0;
                    break;
                    }
                }
        }
    }
    cout<<count;

}
