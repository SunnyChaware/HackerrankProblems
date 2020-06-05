#include <bits/stdc++.h>

using namespace std;

/*
 * Author - Shubham Gupta
 * 04 June 2020
 */

int main()
{
    int n , p , i , j ,front,back;

    cin>>n;
    cin>>p;

    front=p/2;

    if(p%2==0)
    {
        back=(n-p)/2;
    }
    else{
        back=(n-(p-1))/2;
    }
if(front<back){
  cout<<front;
}
else{
  cout<<back;
}

}
