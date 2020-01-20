
//I tried to sort the array  first and the adding forward four and backward four
//
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int a[n],i,j,sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //sorting of aray
    int temp=0;
    for(i=0;i<n;i++){
            for(j=i+1;j<n;j++)
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    //minimum
    for(i=0;i<n-1;i++)
    {
       sum1 += a[i];
    }
    //maximum
    for(i=n-1;i>0;i--)
    {
        sum2 += a[i];
    }
    cout<<sum1<<" "<<sum2<<endl;
}
