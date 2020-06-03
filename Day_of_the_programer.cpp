/*
Author Sunny Chaware;
Date 03 june 2020

In this question we can simply solve by doing pre calculations
    if the year is 1918 then 256th day will be 26.09 we can calculate it by adding
    all the dates but remember january =31 + february = 15(because of change in year) and rest is
    normal days
*/

#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int year;
    cin>>year;

    if(year==1918){
        cout<<"26.09.1918"<<endl;
    }
    else{
        if((year<1918 && year%4==0) || (year%400 == 0) || (year%4==0 && year%100 != 0)){
            cout<<"12.09."<<year<<endl;
        }
        else{
            cout<<"13.09."<<year<<endl;
        }
    }
}
