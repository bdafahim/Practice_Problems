#include<bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    string s;
    locale loc;

    string v = {'a','e','i','o','u','y','A','E','I','O','U','Y'};
    cin>>s;
    for(int i=0; i<s.length();i++)
    {
        bool b=true;
        for(int j=0; j<v.length();j++)
        {
            if(s[i] == v[j])
                b = false;
        }
        if(b)
            cout<<'.'<<tolower(s[i], loc);
    }

    return 0;
}






