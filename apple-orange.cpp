#include<iostream>
using namespace std;
int main()
{
    int  s,t,a,b,i,m,n,app[100000],o[100000],apple=0,orange=0;
    cin>>s>>t;    //values of house starting and ending point
    cin>>a>>b;    //values of both the trees
    cin>>m>>n;    //no. of apples and oranges fell from tree
   // cout<<"Distance of house->"<<s<<" "<<t<<endl;
    //cout<<"Distance of trees->"<<a<<" "<<b<<endl;
    //cout<<"Values of fruit fallen->"<<m<<" "<<n<<endl;

    //cout<<"enter the values "<<m<<"for apple"<<endl;
    for(i=0;i<m;i++){
        cin>>app[i];
    }
     //cout<<"enter the values "<<n<<"for oranges"<<endl;
    for(i=0;i<n;i++){
        cin>>o[i];
    }
    //cout<<"apples at a distance of"<<endl;
     // for(i=0;i<m;i++){
       // cout<<app[i]<<" ";}

     //cout<<"oranges at a distance of->"<<endl;
     // for(i=0;i<n;i++){
       //cout<<o[i]<<" ";}


    //cout<<"for the sum of apple"<<endl;
    int sum1[100000];
    for(i=0;i<m;i++){
        sum1[i]= (a + app[i]);
    }
    int sum2[10000];
    for(i=0;i<n;i++){
        sum2[i]= (b + o[i]);
    }

    /*cout<<"the apple are fallen at distances of->"<<endl;
    for(i=0;i<m;i++){
        cout<<sum1[i]<<" "<<endl;
    }*/
    /*cout<<"the oranges are fallen at distances of->"<<endl;
     for(i=0;i<n;i++){
        cout<<sum2[i]<<" "<<endl;
     }*/

     for(i=0;i<m;i++){
        if(sum1[i]>=s && sum1[i]<=t){
            apple++;
        }
    }
     for(i=0;i<n;i++){
        if(sum2[i]<=t && sum2[i]>=s){
            orange++;
        }
     }

     cout<<apple<<endl<<orange;
}
