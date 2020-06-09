/*
* Author Sunny Chaware
* 09 June 2020
*/
#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main()
{
    char str[10];
    int heights_of_letter[26];
    char apla[] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    // input the heights of letter
    for (int i=0;i<26;i++){
        cin>>heights_of_letter[i];
    }
    cin>>str;

    int cnt=0;
    for(int i=0;str[i];i++){
        cnt++;
    }

    int max=heights_of_letter[0];
    for(int j=0;str[j];j++){
        for(int i=0;i<26;i++){
            if(str[j]==apla[i]){
                if(max<heights_of_letter[i]){
                    max = heights_of_letter[i];
                }
            }
        }
    }
    int result  = 0;
    result = cnt*max;
    cout<<result<<endl;
}
