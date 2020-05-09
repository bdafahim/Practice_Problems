#include<bits/stdc++.h>

using namespace std;

int main()
{
    long double n,m,a;
    long long ans;
    cin>>n>>m>>a;

    ans = ceil(n*1.0/a*1.0)*ceil(m*1.0/a*1.0);

    cout<<ans<<"\n";

}
