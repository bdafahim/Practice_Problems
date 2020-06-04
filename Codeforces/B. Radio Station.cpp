#include<bits/stdc++.h>
using namespace std;

map<string,string>Map;

int main()
{
    int n,m;
    cin>>n>>m;
    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
        Map[s2] = s1;
    }

    string str;
    while(m--)
    {
        string s3,s4;
        cin>>s3>>s4;
        str = s4;
        s4.erase(s4.end()-1);

        cout<<s3<<" "<<str<<" #"<<Map[s4]<<endl;
    }
}

