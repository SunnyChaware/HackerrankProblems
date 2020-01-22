#include<iostream>
using namespace std;
int main()
{
    long int x1, x2, v1, v2;

    cout<<"enter the starting position x1, x2 and the speed of jump v1, v2"<<endl;
    cin>>x1>>v1>>x2>>v2;

    if(v2>=v1){
        cout<<"NO"<<endl;
    }
    else if((x1-x2)%(v1-v2)==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
