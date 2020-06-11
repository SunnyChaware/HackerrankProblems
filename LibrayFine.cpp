#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    // Date book returned
    int d1,m1,y1;
    cin>>d1>>m1>>y1;

    // date book due to return
    int d2,m2,y2;
    cin>>d2>>m2>>y2;

    int fine=0;

    if(d1 > d2 && m1 == m2 && y1 == y2){
        fine = 15 * (d1-d2);
    }
    else if(m1 > m2 && y1 == y2){
        fine = 500 * (m1-m2);
    }
    else if(y1 > y2){
        fine  = 10000;
    }
    cout << fine << endl;
}
