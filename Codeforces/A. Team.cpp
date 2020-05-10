#include<bits/stdc++.h>

using namespace std;

vector<int>ans(100);
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if((x==1 && y==1) || (x==1 && z==1) || (y==1 && z==1))
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}





