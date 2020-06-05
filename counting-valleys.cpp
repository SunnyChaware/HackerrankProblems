#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int n,ud=0,rest=0;
    char s;

    cin>>n;
        for(int i = 0; i++ < n;){
        cin >> s;
        if(s == 'U'){
            ud++;
        }
        else {
            ud--;
        }
        if(ud == 0 && s == 'U'){
            rest++;
        }
    }
    cout << rest << endl;
}

