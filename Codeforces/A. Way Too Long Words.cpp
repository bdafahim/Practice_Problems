#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        int Size = s.length();
        if(Size<=10)
        {
            cout<<s<<"\n";
        }

        else
        {
            cout<<s[0]<<Size-2<<s[Size-1]<<"\n";
        }
    }

}

